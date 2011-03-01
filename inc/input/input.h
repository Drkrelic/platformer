#ifndef FOB_INPUT_INPUT_H
#define FOB_INPUT_INPUT_H

namespace fob {
    namespace world {
        struct GameState;
    }
    namespace input {

//-----------------------------------------------------------------------------
//
namespace InputAction
{
    enum Enum
    {
        None,
        Jump,
        Left,
        Right,
        Quit
    };
}

//-----------------------------------------------------------------------------
//
struct InputState
{
    InputState(InputAction::Enum action=InputAction::None):action(action) {}
    InputAction::Enum action;
};

//-----------------------------------------------------------------------------
//
namespace InputUtils
{
    InputState Update(const fob::world::GameState &state);
}

    } // namespace input
} // namespace fob

#endif
