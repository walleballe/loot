/*  LOOT

    A load order optimisation tool for Oblivion, Skyrim, Fallout 3 and
    Fallout: New Vegas.

    Copyright (C) 2012 WrinklyNinja

    This file is part of LOOT.

    LOOT is free software: you can redistribute
    it and/or modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    LOOT is distributed in the hope that it will
    be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with LOOT.  If not, see
    <https://www.gnu.org/licenses/>.
    */

#ifndef LOOT_GUI_STATE_GAME_GAME_DETECTION_ERROR
#define LOOT_GUI_STATE_GAME_GAME_DETECTION_ERROR

#include <stdexcept>

namespace loot {
/**
 * @brief An exception class thrown if an error occurs when detecting installed
 *        games.
 */
class GameDetectionError : public std::runtime_error {
public:
  using std::runtime_error::runtime_error;
};
}

#endif
