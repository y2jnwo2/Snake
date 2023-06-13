#pragma once
#include "ConsoleObject.h"
#include <list>

// ���� :
class ConsoleEngineCore
{
public:
	// constrcuter destructer
	ConsoleEngineCore();
	~ConsoleEngineCore();

	// delete Function
	ConsoleEngineCore(const ConsoleEngineCore& _Other) = delete;
	ConsoleEngineCore(ConsoleEngineCore&& _Other) noexcept = delete;
	ConsoleEngineCore& operator=(const ConsoleEngineCore& _Other) = delete;
	ConsoleEngineCore& operator=(ConsoleEngineCore&& _Other) noexcept = delete;

	static void EngineOff()
	{
		IsEngineProcess = false;
	}

	static void EngineStart(const int4& Scale);

	template<typename ObjectType>
	static ObjectType* CreateObject()
	{
		ObjectType* NewObject = new ObjectType();
		Objects.push_back(NewObject);
		return NewObject;
	}

	static ConsoleScreen Screen;

protected:

private:
	static std::list<ConsoleObject*> Objects;
	static bool IsEngineProcess;
};

