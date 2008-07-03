/*
===========================================================================
Copyright (C) 2008 Maurice Doison

This file is part of Tremulous.

Tremulous is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Tremulous is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Tremulous; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/

#include "g_local.h"
static void game_Print( scDataTypeValue_t *args, scDataTypeValue_t *ret )
{
  G_Printf(SC_StringToChar(args[0].data.string));
  ret->type = TYPE_UNDEF;
}

static void game_Command( scDataTypeValue_t *args, scDataTypeValue_t *ret )
{
  trap_SendConsoleCommand(EXEC_APPEND, SC_StringToChar(args[0].data.string));
  ret->type = TYPE_UNDEF;
}

static scLib_t game_lib[] = {
  { "Print", game_Print, { TYPE_STRING , TYPE_UNDEF }, TYPE_UNDEF },
  { "Command", game_Command, { TYPE_STRING, TYPE_UNDEF }, TYPE_UNDEF },
  { "" }
};

void SC_game_init( void )
{
  SC_AddLibrary( "game", game_lib );
}

