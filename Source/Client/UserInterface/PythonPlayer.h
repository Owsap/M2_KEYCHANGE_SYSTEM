/// 1.
// Search
	void IsOpenPrivateShop();

// Add below
#if defined(ENABLE_KEYCHANGE_SYSTEM)
	// Keyboard Controls
public:
	void OpenKeyChangeWindow();
	void IsOpenKeySettingWindow(BOOL bSet) { m_isOpenKeySettingWindow = bSet; };

	void KeySetting(int iKey, int iKeyFunction) { m_keySettingMap[iKey] = iKeyFunction; }
	void KeySettingClear() { m_keySettingMap.clear(); }

	void OnKeyDown(int iKey);
	void OnKeyUp(int iKey);

	using KeySettingMap = std::map<int, int>;
private:
	int m_iKeyBuffer;
	BOOL m_isOpenKeySettingWindow;
	KeySettingMap m_keySettingMap;
public:
#endif