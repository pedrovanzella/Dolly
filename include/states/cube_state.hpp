#ifndef STATES_CUBE_STATE_HPP
#define STATES_CUBE_STATE_HPP

#include "../game_state.hpp"
#include "../game.hpp"
#include "../util/shader_loader.hpp"

namespace Dolly {
    class CubeState: public GameState {
    public:
	CubeState * create(Game* game) const { return new CubeState(game); }
	CubeState(Game* game);

	void draw(const float deltaTime);
	void update(const float deltaTime);
	void handleInput();
	
    private:
	ShaderLoader* shaderLoader;
	GLuint vao;
    };
}

#endif /* STATES_CUBE_STATE_HPP */