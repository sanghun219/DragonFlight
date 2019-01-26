#pragma once
class IScene;

enum class SCENE
{
	LOGO,
	ENTRY,
	MENU,
	OPTION,
	STAGE1,
	BOSS1,
	END
};

class SceneMgr
{
private:
	static SceneMgr* m_pInst;
	IScene * m_Scene;
public:
	static SceneMgr* GetInst()
	{
		if (m_pInst == nullptr)
			m_pInst = new SceneMgr();
		return m_pInst;
	}
public:
	void SetScene(SCENE scene);
	void Update();
	void Draw();
	void Destroy();
private:
	SceneMgr();
public:
	~SceneMgr();
};

