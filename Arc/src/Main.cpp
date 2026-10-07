#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto gm = GameManager::sharedState();
        if (gm) {
            // Asigna 5000 llaves para cubrir todos los cofres
            gm->m_playerKeys = 5000;
            
            // Guarda los cambios en tu progreso local
            gm->save();
        }

        return true;
    }
};
