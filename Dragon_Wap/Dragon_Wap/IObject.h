#pragma once
#include "Math.h"
class IObject
{
public:
	// IObject 클래스를 초기화하는 함수입니다.
	virtual void Init() = 0;

	// IObject를 업데이트하는 데 사용하는 함수입니다.
	// 게임의 로직 부분을 구현하기 위해서는 Update 함수를
	// 사용하시기 바랍니다.
	virtual void Update() = 0;

	// IObject를 렌더링하는데 사용하는 함수입니다.
	virtual void Draw() = 0;
	virtual void Destroy() = 0;
public:
	Position position;
public:
	IObject();
	virtual ~IObject();
};

