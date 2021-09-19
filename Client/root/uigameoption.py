''' 1. '''
# Search
			self.showsalesTextButtonList.append(GetObject("salestext_off_button"))

# Add below
			if app.ENABLE_KEYCHANGE_SYSTEM:
				GetObject("key_setting_show_button").SetEvent(ui.__mem_func__(self.OpenKeyChangeWindow))

''' 2. '''
# Search
	def __ClickRadioButton(self, buttonList, buttonIndex):

# Add above
	if app.ENABLE_KEYCHANGE_SYSTEM:
		def OpenKeyChangeWindow(self):
			player.OpenKeyChangeWindow()