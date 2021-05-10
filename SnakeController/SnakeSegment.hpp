#pragma once

#include <list>
#include <memory>
#include <stdexcept>
#include <functional>

#include "IEventHandler.hpp"
#include "SnakeInterface.hpp"
#include "SnakeController.hpp"

class Event;
class IPort;

class SnakeSegment
{

public:


    struct Segment
    {
        int x;
        int y;
    };
    Snake::Direction m_currentDirection;
    std::list<Segment> m_segments;

    Segment calculateNewHead() const;
    // void updateSegmentsIfSuccessfullMove(Segment const& newHead);
    // void addHeadSegment(Segment const& newHead);
    // void removeTailSegmentIfNotScored(Segment const& newHead);
    // void removeTailSegment();

};
