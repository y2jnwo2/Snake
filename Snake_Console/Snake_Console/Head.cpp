#include "Head.h"
#include <conio.h>
#include "ConsoleEngineCore.h"


int count = 0;
Head::Head()
{
    SetChar('H');
    SetPos({ 0,0 });
}

Head::~Head()
{
}

void Head::Tick(float _Time)
{
    char Select = (char)_getch();
   

    int4 MovePos = { 0, 0 };
    
    switch (Select)
    {
    case 'a':
        MovePos = int4::Left;
        count++;
        break;
    case 'd':
        MovePos = int4::Right;
        count++;
        break;
    case 'w':
        MovePos = int4::Up;
        count++;
        break;
    case 's':
        MovePos = int4::Down;
        count++;
        break;
    case 'q':
        ConsoleEngineCore::EngineOff();
        break;
    default:
        break;
    }
   
        AddPos(MovePos);
}

//bool Head::isCheck()
//{
//    
//    if (AddPos(prePos)== )
//    return;
//}