#pragma once
#pragma comment(lib, "bakkesmod.lib")
#pragma warning(push, 0)
#include "bakkesmod/plugin/bakkesmodplugin.h"
#pragma warning(pop)

class TutorialPlugin : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	virtual void onLoad();
	virtual void onUnload();
};