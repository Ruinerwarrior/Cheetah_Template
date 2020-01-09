#ifndef GAME_GAMELAYER_H_
#define GAME_GAMELAYER_H_

#include "Cheetah.h"

namespace game
{
	class GameLayer : public cheetah::UpdateLayer
	{
	public:
		GameLayer();
		~GameLayer();
		void onAttach() override;
		void onEvent(cheetah::Event& event) override;
		void onUpdate(const float& deltaTime) override;
	};

}

#endif // !GAME_GAMELAYER_H_