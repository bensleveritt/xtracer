/*

	This file is part of xtracer.

	sdl.hpp
	SDL driver

	Copyright (C) 2010, 2011
	Papadopoulos Nikolaos

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 3 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General
	Public License along with this library; if not, write to the
	Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
	Boston, MA 02110-1301 USA

*/

#ifndef XTRACER_DRV_SDL_HPP_INCLUDED
#define XTRACER_DRV_SDL_HPP_INCLUDED

#include "../drv.hpp"
#include <SDL/SDL.h>

class DrvSDL: public Driver
{
	public:
		DrvSDL(Framebuffer &fb);
		~DrvSDL();

		xt_status_t init();
		xt_status_t deinit();
		xt_status_t update(unsigned int x0, unsigned int y0, unsigned int x1, unsigned int y1);
		xt_status_t flip();

	private:
		SDL_Surface* m_p_screen;
};

#endif /* XTRACER_DRV_SDL_HPP_INCLUDED */