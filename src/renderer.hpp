/*

	This file is part of xtracer.

	renderer.hpp
	Renderer

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

#ifndef XTRACER_RENDERER_HPP_INCLUDED
#define XTRACER_RENDERER_HPP_INCLUDED

#include <string>

#include "err.h"
#include "fb.hpp"

/* Default values for the raytracer environment */
#define XT_DEFAULT_RECUR_DEPTH 5

class Renderer
{
	public:
		Renderer(Framebuffer &fb, unsigned int depth = XT_DEFAULT_RECUR_DEPTH);

		unsigned int recursion_depth();
		unsigned int set_recursion_depth(unsigned int depth);

		xt_status_t render(const char* scenefile, const char *camera);

	private:
		Framebuffer *m_p_fb;
		unsigned int m_p_depth;
};

#endif /* XTRACER_RENDERER_HPP_INCLUDED */
