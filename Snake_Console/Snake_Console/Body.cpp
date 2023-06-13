#include "Body.h"
#include "Head.h"
Body::Body()
{
    SetChar('B');
    SetPos(head->GetPos());
}

Body::~Body()
{
}

