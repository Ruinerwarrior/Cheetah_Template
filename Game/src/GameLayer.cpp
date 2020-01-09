#include "GameLayer.h"

#include "Cheetah.h"

#include <iostream>

using namespace cheetah;

static ResourceLoader resourceLoader;

namespace game
{
	GameLayer::GameLayer()
	{
	}

	// called when layer is attached to queue
	void GameLayer::onAttach()
	{
	}

	// called on event
	void GameLayer::onEvent(Event& event)
	{
	}

	// update
	void GameLayer::onUpdate(const float& deltaTime)
	{
	}

	GameLayer::~GameLayer()
	{
	}
}