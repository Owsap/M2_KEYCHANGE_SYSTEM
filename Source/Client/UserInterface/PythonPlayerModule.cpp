/// 1.
// Search
void initPlayer()

// Add above
#if defined(ENABLE_KEYCHANGE_SYSTEM)
PyObject* playerOpenKeyChangeWindow(PyObject* poSelf, PyObject* poArgs)
{
	CPythonPlayer::Instance().OpenKeyChangeWindow();
	return Py_BuildNone();
}

PyObject* playerIsOpenKeySettingWindow(PyObject* poSelf, PyObject* poArgs)
{
	BOOL bSet = 0;
	if (!PyTuple_GetInteger(poArgs, 0, &bSet))
		return Py_BadArgument();

	CPythonPlayer::Instance().IsOpenKeySettingWindow(bSet);
	return Py_BuildNone();
}

PyObject* playerKeySettingClear(PyObject* poSelf, PyObject* poArgs)
{
	CPythonPlayer::Instance().KeySettingClear();
	return Py_BuildNone();
}

PyObject* playerKeySetting(PyObject* poSelf, PyObject* poArgs)
{
	int iKey = 0;
	if (!PyTuple_GetInteger(poArgs, 0, &iKey))
		return Py_BadArgument();

	int iKeyFunction = 0;
	if (!PyTuple_GetInteger(poArgs, 1, &iKeyFunction))
		return Py_BadArgument();

	CPythonPlayer::Instance().KeySetting(iKey, iKeyFunction);
	return Py_BuildNone();
}

PyObject* playerOnKeyDown(PyObject* poSelf, PyObject* poArgs)
{
	int iKey = 0;
	if (!PyTuple_GetInteger(poArgs, 0, &iKey))
		return Py_BadArgument();

	CPythonPlayer::Instance().OnKeyDown(iKey);
	return Py_BuildNone();
}

PyObject* playerOnKeyUp(PyObject* poSelf, PyObject* poArgs)
{
	int iKey = 0;
	if (!PyTuple_GetInteger(poArgs, 0, &iKey))
		return Py_BadArgument();

	CPythonPlayer::Instance().OnKeyUp(iKey);
	return Py_BuildNone();
}
#endif

/// 2.
// Search
		{ NULL, NULL, NULL },

// Add above
#if defined(ENABLE_KEYCHANGE_SYSTEM)
		// Keyboard Controls
		{ "OpenKeyChangeWindow", playerOpenKeyChangeWindow , METH_VARARGS },
		{ "IsOpenKeySettingWindow", playerIsOpenKeySettingWindow, METH_VARARGS },
		{ "KeySettingClear", playerKeySettingClear, METH_VARARGS },
		{ "KeySetting", playerKeySetting, METH_VARARGS },
		{ "OnKeyDown", playerOnKeyDown, METH_VARARGS },
		{ "OnKeyUp", playerOnKeyUp, METH_VARARGS },
#endif

/// 3.
// Add to the bottom of the document above }
#if defined(ENABLE_KEYCHANGE_SYSTEM)
	PyModule_AddIntConstant(poModule, "KEY_MOVE_UP_1", KEY_MOVE_UP_1);
	PyModule_AddIntConstant(poModule, "KEY_MOVE_DOWN_1", KEY_MOVE_DOWN_1);
	PyModule_AddIntConstant(poModule, "KEY_MOVE_LEFT_1", KEY_MOVE_LEFT_1);
	PyModule_AddIntConstant(poModule, "KEY_MOVE_RIGHT_1", KEY_MOVE_RIGHT_1);
	PyModule_AddIntConstant(poModule, "KEY_MOVE_UP_2", KEY_MOVE_UP_2);
	PyModule_AddIntConstant(poModule, "KEY_MOVE_DOWN_2", KEY_MOVE_DOWN_2);
	PyModule_AddIntConstant(poModule, "KEY_MOVE_LEFT_2", KEY_MOVE_LEFT_2);
	PyModule_AddIntConstant(poModule, "KEY_MOVE_RIGHT_2", KEY_MOVE_RIGHT_2);
	PyModule_AddIntConstant(poModule, "KEY_CAMERA_ROTATE_POSITIVE_1", KEY_CAMERA_ROTATE_POSITIVE_1);
	PyModule_AddIntConstant(poModule, "KEY_CAMERA_ROTATE_NEGATIVE_1", KEY_CAMERA_ROTATE_NEGATIVE_1);
	PyModule_AddIntConstant(poModule, "KEY_CAMERA_ZOOM_POSITIVE_1", KEY_CAMERA_ZOOM_POSITIVE_1);
	PyModule_AddIntConstant(poModule, "KEY_CAMERA_ZOOM_NEGATIVE_1", KEY_CAMERA_ZOOM_NEGATIVE_1);
	PyModule_AddIntConstant(poModule, "KEY_CAMERA_PITCH_POSITIVE_1", KEY_CAMERA_PITCH_POSITIVE_1);
	PyModule_AddIntConstant(poModule, "KEY_CAMERA_PITCH_NEGATIVE_1", KEY_CAMERA_PITCH_NEGATIVE_1);
	PyModule_AddIntConstant(poModule, "KEY_CAMERA_ROTATE_POSITIVE_2", KEY_CAMERA_ROTATE_POSITIVE_2);
	PyModule_AddIntConstant(poModule, "KEY_CAMERA_ROTATE_NEGATIVE_2", KEY_CAMERA_ROTATE_NEGATIVE_2);
	PyModule_AddIntConstant(poModule, "KEY_CAMERA_ZOOM_POSITIVE_2", KEY_CAMERA_ZOOM_POSITIVE_2);
	PyModule_AddIntConstant(poModule, "KEY_CAMERA_ZOOM_NEGATIVE_2", KEY_CAMERA_ZOOM_NEGATIVE_2);
	PyModule_AddIntConstant(poModule, "KEY_CAMERA_PITCH_POSITIVE_2", KEY_CAMERA_PITCH_POSITIVE_2);
	PyModule_AddIntConstant(poModule, "KEY_CAMERA_PITCH_NEGATIVE_2", KEY_CAMERA_PITCH_NEGATIVE_2);
	PyModule_AddIntConstant(poModule, "KEY_ROOTING_1", KEY_ROOTING_1);
	PyModule_AddIntConstant(poModule, "KEY_ROOTING_2", KEY_ROOTING_2);
	PyModule_AddIntConstant(poModule, "KEY_ATTACK", KEY_ATTACK);
	PyModule_AddIntConstant(poModule, "KEY_RIDEMYHORS", KEY_RIDEMYHORS);
	PyModule_AddIntConstant(poModule, "KEY_FEEDMYHORS", KEY_FEEDMYHORS);
	PyModule_AddIntConstant(poModule, "KEY_BYEMYHORS", KEY_BYEMYHORS);
	PyModule_AddIntConstant(poModule, "KEY_RIDEHORS", KEY_RIDEHORS);
	PyModule_AddIntConstant(poModule, "KEY_EMOTION1", KEY_EMOTION1);
	PyModule_AddIntConstant(poModule, "KEY_EMOTION2", KEY_EMOTION2);
	PyModule_AddIntConstant(poModule, "KEY_EMOTION3", KEY_EMOTION3);
	PyModule_AddIntConstant(poModule, "KEY_EMOTION4", KEY_EMOTION4);
	PyModule_AddIntConstant(poModule, "KEY_EMOTION5", KEY_EMOTION5);
	PyModule_AddIntConstant(poModule, "KEY_EMOTION6", KEY_EMOTION6);
	PyModule_AddIntConstant(poModule, "KEY_EMOTION7", KEY_EMOTION7);
	PyModule_AddIntConstant(poModule, "KEY_EMOTION8", KEY_EMOTION8);
	PyModule_AddIntConstant(poModule, "KEY_EMOTION9", KEY_EMOTION9);
	PyModule_AddIntConstant(poModule, "KEY_SLOT_1", KEY_SLOT_1);
	PyModule_AddIntConstant(poModule, "KEY_SLOT_2", KEY_SLOT_2);
	PyModule_AddIntConstant(poModule, "KEY_SLOT_3", KEY_SLOT_3);
	PyModule_AddIntConstant(poModule, "KEY_SLOT_4", KEY_SLOT_4);
	PyModule_AddIntConstant(poModule, "KEY_SLOT_5", KEY_SLOT_5);
	PyModule_AddIntConstant(poModule, "KEY_SLOT_6", KEY_SLOT_6);
	PyModule_AddIntConstant(poModule, "KEY_SLOT_7", KEY_SLOT_7);
	PyModule_AddIntConstant(poModule, "KEY_SLOT_8", KEY_SLOT_8);
	PyModule_AddIntConstant(poModule, "KEY_SLOT_CHANGE_1", KEY_SLOT_CHANGE_1);
	PyModule_AddIntConstant(poModule, "KEY_SLOT_CHANGE_2", KEY_SLOT_CHANGE_2);
	PyModule_AddIntConstant(poModule, "KEY_SLOT_CHANGE_3", KEY_SLOT_CHANGE_3);
	PyModule_AddIntConstant(poModule, "KEY_SLOT_CHANGE_4", KEY_SLOT_CHANGE_4);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_STATE", KEY_OPEN_STATE);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_SKILL", KEY_OPEN_SKILL);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_QUEST", KEY_OPEN_QUEST);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_INVENTORY", KEY_OPEN_INVENTORY);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_DDS", KEY_OPEN_DDS);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_MINIMAP", KEY_OPEN_MINIMAP);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_LOGCHAT", KEY_OPEN_LOGCHAT);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_PET", KEY_OPEN_PET);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_GUILD", KEY_OPEN_GUILD);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_MESSENGER", KEY_OPEN_MESSENGER);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_HELP", KEY_OPEN_HELP);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_ACTION", KEY_OPEN_ACTION);
	PyModule_AddIntConstant(poModule, "KEY_SCROLL_ONOFF", KEY_SCROLL_ONOFF);
	PyModule_AddIntConstant(poModule, "KEY_PLUS_MINIMAP", KEY_PLUS_MINIMAP);
	PyModule_AddIntConstant(poModule, "KEY_MIN_MINIMAP", KEY_MIN_MINIMAP);
	PyModule_AddIntConstant(poModule, "KEY_SCREENSHOT", KEY_SCREENSHOT);
	PyModule_AddIntConstant(poModule, "KEY_SHOW_NAME", KEY_SHOW_NAME);
	PyModule_AddIntConstant(poModule, "KEY_OPEN_AUTO", KEY_OPEN_AUTO);
	PyModule_AddIntConstant(poModule, "KEY_AUTO_RUN", KEY_AUTO_RUN);
	PyModule_AddIntConstant(poModule, "KEY_NEXT_TARGET", KEY_NEXT_TARGET);
	PyModule_AddIntConstant(poModule, "KEY_MONSTER_CARD", KEY_MONSTER_CARD);
	PyModule_AddIntConstant(poModule, "KEY_PARTY_MATCH", KEY_PARTY_MATCH);
	PyModule_AddIntConstant(poModule, "KEY_SELECT_DSS_1", KEY_SELECT_DSS_1);
	PyModule_AddIntConstant(poModule, "KEY_SELECT_DSS_2", KEY_SELECT_DSS_2);
	PyModule_AddIntConstant(poModule, "KEY_PASSIVE_ATTR1", KEY_PASSIVE_ATTR1);
	PyModule_AddIntConstant(poModule, "KEY_PASSIVE_ATTR2", KEY_PASSIVE_ATTR2);

	PyModule_AddIntConstant(poModule, "KEY_ADDKEYBUFFERCONTROL", KEY_ADDKEYBUFFERCONTROL);
	PyModule_AddIntConstant(poModule, "KEY_ADDKEYBUFFERALT", KEY_ADDKEYBUFFERALT);
	PyModule_AddIntConstant(poModule, "KEY_ADDKEYBUFFERSHIFT", KEY_ADDKEYBUFFERSHIFT);
#endif