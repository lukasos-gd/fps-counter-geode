#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {
    CCLabelBMFont* m_label = nullptr;

    bool init(GJGameLevel* level) {
        if (!PlayLayer::init(level)) return false;

        auto winSize = CCDirector::sharedDirector()->getWinSize();
        auto settings = Mod::get()->getSettings();

        float scale = settings->getValue<float>("scale");

        m_label = CCLabelBMFont::create("Loading...", "bigFont.fnt");
        m_label->setScale(scale);
        m_label->setAnchorPoint({0,1});
        m_label->setPosition({5, winSize.height - 5});
        m_label->setZOrder(999);

        this->addChild(m_label);
        this->schedule(schedule_selector(MyPlayLayer::updateCounter), 0.1f);

        return true;
    }

    void updateCounter(float dt) {
        float interval = CCDirector::sharedDirector()->getAnimationInterval();
        float fps = interval > 0 ? 1.f / interval : 0.f;

        int attempts = this->m_level->m_attempts;

        std::string text =
            "FPS: " + std::to_string((int)fps) +
            "\nAttempts: " + std::to_string(attempts);

        m_label->setString(text.c_str());
    }
};
