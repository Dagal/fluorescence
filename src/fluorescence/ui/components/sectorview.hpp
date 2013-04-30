/*
 * fluorescence is a free, customizable Ultima Online client.
 * Copyright (C) 2010-2013, http://fluorescence-client.org

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef FLUO_UI_COMPONENTS_SECTORVIEW_HPP
#define FLUO_UI_COMPONENTS_SECTORVIEW_HPP

#include <set>
#include <typedefs.hpp>

namespace fluo {
namespace ui {
namespace components {

// this class renders sectors (in whatever way)
// and must be able to tell the sector manager which ones
class SectorView {
public:
    SectorView(bool requireFullSectorLoad);
    ~SectorView();

    virtual void getRequiredSectors(std::set<IsoIndex>& list, unsigned int mapHeight, unsigned int cacheAdd) = 0;
    bool requireFullSectorLoad() const;

private:
    bool requireFullSectorLoad_;
};

}
}
}

#endif
