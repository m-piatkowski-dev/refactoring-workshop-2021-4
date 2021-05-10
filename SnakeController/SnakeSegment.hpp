#pragma once

#include <list>
#include <memory>
#include <stdexcept>
#include <functional>

#include "IEventHandler.hpp"
#include "SnakeInterface.hpp"

class Event;
class IPort;

class SnakeSegment
{
public:


private:

    struct Segment
    {
        int x;
        int y;
    };

    std::list<Segment> m_segments;


};