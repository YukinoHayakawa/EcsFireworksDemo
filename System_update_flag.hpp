﻿#pragma once

#include <Usagi/Experimental/v2/Game/Entity/Archetype.hpp>
#include <Usagi/Experimental/v2/Game/Database/EntityDatabase.hpp>
#include "Runtime.hpp"
#include "Service_content_update_flag.hpp"

namespace usagi
{
struct System_update_flag
{
    using WriteAccess = ComponentFilter<>;
    using ReadAccess = ComponentFilter<>;

    template <typename RuntimeServices, typename EntityDatabaseAccess>
    void update(RuntimeServices &&rt, EntityDatabaseAccess &&db)
    {
        USAGI_OPT_SERVICE(rt, Service_content_update_flag, flag, {
            flag = true;
        });
    }
};
}
