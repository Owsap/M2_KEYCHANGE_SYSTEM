''' 1. '''
# Search
import stringCommander

# Add below
if app.ENABLE_KEYCHANGE_SYSTEM:
	import uiKeyChange

''' 2. '''
# Search @ def __init__
		self.affectShower = None
		self.playerGauge = None

# Add below
		if app.ENABLE_KEYCHANGE_SYSTEM:
			self.wndKeyChange = None

''' 3. '''
# Search @ def __init__
		self.__ProcessPreservedServerCommand()

# Add below
		if app.ENABLE_KEYCHANGE_SYSTEM:
			self.wndKeyChange = uiKeyChange.KeyChangeWindow(self, self.interface)
			self.ADDKEYBUFFERCONTROL = player.KEY_ADDKEYBUFFERCONTROL
			self.ADDKEYBUFFERALT = player.KEY_ADDKEYBUFFERALT
			self.ADDKEYBUFFERSHIFT = player.KEY_ADDKEYBUFFERSHIFT

''' 4. '''
# Search @ def Open
		self.__BuildKeyDict()

# Replace with
		if app.ENABLE_KEYCHANGE_SYSTEM:
			pass
		else:
			self.__BuildKeyDict()

''' 5. '''
# Search @ def Close
		app.HideCursor()

# Add below
		if app.ENABLE_KEYCHANGE_SYSTEM:
			if self.wndKeyChange:
				self.wndKeyChange.KeyChangeWindowClose(True)
				self.wndKeyChange = None

''' 6. '''
# Search
	def __SelectQuickPage(self, pageIndex):

# Add above
	if app.ENABLE_KEYCHANGE_SYSTEM:
		def OpenKeyChangeWindow(self):
			self.wndKeyChange.Open()

		def OpenWindow(self, type, state):
			if type == player.KEY_OPEN_STATE:
				self.interface.ToggleCharacterWindow(state)
			elif type == player.KEY_OPEN_INVENTORY:
				self.interface.ToggleInventoryWindow()
			elif type == player.KEY_OPEN_DDS:
				self.interface.ToggleDragonSoulWindowWithNoInfo()
			elif type == player.KEY_OPEN_MINIMAP:
				self.interface.ToggleMiniMap()
			elif type == player.KEY_OPEN_LOGCHAT:
				self.interface.ToggleChatLogWindow()
			elif type == player.KEY_OPEN_GUILD:
				self.interface.ToggleGuildWindow()
			elif type == player.KEY_OPEN_MESSENGER:
				self.interface.ToggleMessenger()
			elif type == player.KEY_OPEN_HELP:
				self.interface.ToggleHelpWindow()
			#if app.ENABLE_GROWTH_PET_SYSTEM:
			#	if type == player.KEY_OPEN_PET:
			#		self.interface.TogglePetInformationWindow()
			#if app.ENABLE_AUTO_SYSTEM:
			#	if type == player.KEY_OPEN_AUTO:
			#		self.interface.ToggleAutoWindow()
			#if app.ENABLE_MONSTER_CARD:
			#	if type == player.KEY_MONSTER_CARD:
			#		self.interface.ToggleMonsterCardWindow()
			#if app.ENABLE_PARTY_MATCH:
			#	if type == player.KEY_PARTY_MATCH:
			#		self.interface.TogglePartyMatchWindow()
			#if app.ENABLE_DSS_KEY_SELECT:
			#	if type == player.KEY_SELECT_DSS_1:
			#		self.interface.DragonSoulKeySelect(0)
			#	elif type == player.KEY_SELECT_DSS_2:
			#		self.interface.DragonSoulKeySelect(1)

		def ScrollOnOff(self):
			if 0 == interfaceModule.IsQBHide:
				interfaceModule.IsQBHide = 1
				self.interface.HideAllQuestButton()
			else:
				interfaceModule.IsQBHide = 0
				self.interface.ShowAllQuestButton()

''' 7. '''
# Search @ def ShowName
		player.SetQuickPage(self.quickSlotPageIndex + 1)

# Replace with
		if not app.ENABLE_KEYCHANGE_SYSTEM:
			player.SetQuickPage(self.quickSlotPageIndex + 1)

''' 8. '''
# Search @ def HideName
		player.SetQuickPage(self.quickSlotPageIndex)

# Replace with
		if not app.ENABLE_KEYCHANGE_SYSTEM:
			player.SetQuickPage(self.quickSlotPageIndex)

''' 9. '''
# Search @ def OnKeyDown
			self.onPressKeyDict[key]()

# Replace with
			if app.ENABLE_KEYCHANGE_SYSTEM:
				if self.wndKeyChange.IsOpen() == 1:
					## Å°¼³Á¤ Ã¢ÀÌ ¿­·ÈÀ»¶§. ±×¸®°í ¹¹¸¦ ¹Ù²ÜÁö ¼±ÅÃÇßÀ»¶§
					if self.wndKeyChange.IsSelectKeySlot():
						if app.IsPressed(app.DIK_LCONTROL) or app.IsPressed(app.DIK_RCONTROL):
							if self.wndKeyChange.IsChangeKey(self.wndKeyChange.GetSelectSlotNumber()):
								self.wndKeyChange.ChangeKey(key + app.DIK_LCONTROL + self.ADDKEYBUFFERCONTROL)
							else:
								chat.AppendChat(chat.CHAT_TYPE_INFO, localeInfo.KEYCHANGE_IMPOSSIBLE_CHANGE)
						elif app.IsPressed(app.DIK_LALT) or app.IsPressed(app.DIK_RALT):
							if self.wndKeyChange.IsChangeKey(self.wndKeyChange.GetSelectSlotNumber()):
								self.wndKeyChange.ChangeKey(key + app.DIK_LALT + self.ADDKEYBUFFERALT)
							else:
								chat.AppendChat(chat.CHAT_TYPE_INFO, localeInfo.KEYCHANGE_IMPOSSIBLE_CHANGE)
						elif app.IsPressed(app.DIK_LSHIFT) or app.IsPressed(app.DIK_RSHIFT):
							if self.wndKeyChange.IsChangeKey(self.wndKeyChange.GetSelectSlotNumber()):
								self.wndKeyChange.ChangeKey(key + app.DIK_LSHIFT + self.ADDKEYBUFFERSHIFT)
							else:
								chat.AppendChat(chat.CHAT_TYPE_INFO, localeInfo.KEYCHANGE_IMPOSSIBLE_CHANGE)
						else:
							self.wndKeyChange.ChangeKey(key)
				else:
					player.OnKeyDown(key)
			else:
				self.onPressKeyDict[key]()

''' 10. '''
# Search @ def OnKeyUp
		try:
			self.onClickKeyDict[key]()
		except KeyError:
			pass
		except:
			raise

# Replace with
		if app.ENABLE_KEYCHANGE_SYSTEM:
			player.OnKeyUp(key)
		else:
			try:
				self.onClickKeyDict[key]()
			except KeyError:
				pass
			except:
				raise