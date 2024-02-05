#include <Geode/Geode.hpp>
#include <Geode/modify/CCLayer.hpp>

using namespace geode::prelude;

struct randomizeSprites : Modify<randomizeSprites, CCLayer> {
    void onEnterTransitionDidFinish() {
        CCLayer::onEnterTransitionDidFinish();

        CCArray *childArray = this->getChildren();

        log::debug("CClayer created");

        for (auto *i : CCArrayExt<CCObject *>(childArray)) {
            if (auto spr = typeinfo_cast<CCSprite *>(i)) {
                log::info("CCSprite {}", spr);
            } else if (auto btn = typeinfo_cast<CCMenuItemSpriteExtra *>(i)) {
                log::info("MenuItemSprite {}", btn);
            }
        }
    }
};
