#include "SnakeSegment.hpp"
#include "SnakeController.cpp"




SnakeSegment::Segment SnakeSegment::calculateNewHead() const
{
    Segment const& currentHead = m_segments.front();

    Segment newHead;
    newHead.x = currentHead.x + (Snake::Dupa::isHorizontal(m_currentDirection) ? Snake::Dupa::isPositive(m_currentDirection) ? 1 : -1 : 0);
    newHead.y = currentHead.y + (Snake::Dupa::isVertical(m_currentDirection) ? Snake::Dupa::isPositive(m_currentDirection) ? 1 : -1 : 0);

    return newHead;
}

// void SnakeSegment::updateSegmentsIfSuccessfullMove(SnakeSegment::Segment const& newHead)
// {
//     if (isSegmentAtPosition(newHead.x, newHead.y) or isPositionOutsideMap(newHead.x, newHead.y)) {
//         m_scorePort.send(std::make_unique<EventT<LooseInd>>());
//     } else {
//         addHeadSegment(newHead);
//         removeTailSegmentIfNotScored(newHead);
//     }
// }

// void SnakeSegment::addHeadSegment(SnakeSegment::Segment const& newHead)
// {
//     m_segments.push_front(newHead);

//     DisplayInd placeNewHead;
//     placeNewHead.x = newHead.x;
//     placeNewHead.y = newHead.y;
//     placeNewHead.value = Cell_SNAKE;

//     m_displayPort.send(std::make_unique<EventT<DisplayInd>>(placeNewHead));
// }

// void SnakeSegment::removeTailSegmentIfNotScored(SnakeSegment::Segment const& newHead)
// {
//     if (std::make_pair(newHead.x, newHead.y) == m_foodPosition) {
//         m_scorePort.send(std::make_unique<EventT<ScoreInd>>());
//         m_foodPort.send(std::make_unique<EventT<FoodReq>>());
//     } else {
//         removeTailSegment();
//     }
// }


// void SnakeSegment::removeTailSegment()
// {
//     auto tail = m_segments.back();

//     DisplayInd l_evt;
//     l_evt.x = tail.x;
//     l_evt.y = tail.y;
//     l_evt.value = Cell_FREE;
//     m_displayPort.send(std::make_unique<EventT<DisplayInd>>(l_evt));

//     m_segments.pop_back();
// }



