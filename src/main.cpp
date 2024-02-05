#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

struct randomizeSprites : Modify<randomizeSprites, MenuLayer> {
    void onMoreGames() {
        log::info("Hello Geode!");
    }
};
