/* ResidualVM - A 3D game interpreter
 *
 * ResidualVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the AUTHORS
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef STARK_RESOURCES_SCROLL_H
#define STARK_RESOURCES_SCROLL_H

#include "common/str.h"

#include "engines/stark/resources/resource.h"

namespace Stark {

class XRCReadStream;

namespace Resources {

/**
 * Scroll position for a location
 */
class Scroll : public Resource {
public:
	static const ResourceType::Type TYPE = ResourceType::kScroll;

	Scroll(Resource *parent, byte subType, uint16 index, const Common::String &name);
	virtual ~Scroll();

	// Resource API
	void readData(XRCReadStream *stream) override;

protected:
	void printData() override;

	uint32 _coordinate;
	uint32 _field_30;
	uint32 _field_34;
	uint32 _bookmarkIndex;
};

} // End of namespace Resources
} // End of namespace Stark

#endif // STARK_RESOURCES_SCROLL_H
