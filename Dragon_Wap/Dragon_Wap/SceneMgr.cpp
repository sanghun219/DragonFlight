#include "SceneMgr.h"
#include "IScene.h"
#include "Stage1.h"
#include "EntryPoint.h"
SceneMgr* SceneMgr::m_pInst = nullptr;

SceneMgr::SceneMgr()
{
	m_Scene = nullptr;
}


SceneMgr::~SceneMgr()
{
}

void SceneMgr::SetScene(SCENE scene)
{
	if (m_Scene != nullptr)
	{
		delete m_Scene;
		m_Scene = nullptr;
	}

	switch (scene)
	{
	case SCENE::LOGO:
		break;
	case SCENE::ENTRY:
		m_Scene = new EntryPoint();
		break;
	case SCENE::MENU:
		break;
	case SCENE::OPTION:
		break;
	case SCENE::STAGE1:
		m_Scene = new Stage1();
		break;
	case SCENE::BOSS1:
		break;
	default:
		break;

	}

	if (m_Scene != nullptr)
		m_Scene->Init();
}

void SceneMgr::Update()
{
	m_Scene->Update();
}

void SceneMgr::Draw()
{
	m_Scene->Draw();
}

void SceneMgr::Destroy()
{
	m_Scene->Destroy();
}
