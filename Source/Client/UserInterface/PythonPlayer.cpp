/// 1.
// Search
void CPythonPlayer::SetGameWindow(PyObject* ppyObject)

// Add above
#if defined(ENABLE_KEYCHANGE_SYSTEM)
void CPythonPlayer::OpenKeyChangeWindow()
{
	if (!m_isOpenKeySettingWindow)
		PyCallClassMemberFunc(m_ppyGameWindow, "OpenKeyChangeWindow", Py_BuildValue("()"));
}
#endif

/// 2.
// Search @ void CPythonPlayer::Clear
	m_inGuildAreaID = 0xffffffff;

// Add below
#if defined(ENABLE_KEYCHANGE_SYSTEM)
	m_isOpenKeySettingWindow = FALSE;
	m_keySettingMap.clear();
#endif

/// 3.
// Search @ CPythonPlayer::CPythonPlayer
	m_iLastAlarmTime = 0;

// Add below
#if defined(ENABLE_KEYCHANGE_SYSTEM)
	m_bAutoRun = false;
#endif