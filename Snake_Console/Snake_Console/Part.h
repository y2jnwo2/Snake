#pragma once
#include "ConsoleObject.h"

// ���� :
class Part : public ConsoleObject
{
public:
	// constrcuter destructer
	Part();
	~Part();

	// delete Function
	Part(const Part& _Other) = delete;
	Part(Part&& _Other) noexcept = delete;
	Part& operator=(const Part& _Other) = delete;
	Part& operator=(Part&& _Other) noexcept = delete;
	int4 GetPart()
	{
		return PrevPos;
	}
protected:

private:
	Part* Next = nullptr;
	Part* Prev = nullptr;
	int4 PrevPos;
};

