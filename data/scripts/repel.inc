EventScript_RepelWoreOff::
	special TryGetNextRepel
	goto_if_eq VAR_RESULT, FALSE, EventScript_RepelWoreOff_Standard
	msgbox Text_RepelWoreOffPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_RepelWoreOff_End
	special UseNextRepel
	playse SE_REPEL
	msgbox Text_UsedAnotherRepel, MSGBOX_SIGN
	waitse
	end

EventScript_RepelWoreOff_Standard:
	msgbox Text_RepelWoreOff, MSGBOX_SIGN
EventScript_RepelWoreOff_End:
	end

Text_RepelWoreOff:
	.string "{STR_VAR_2}'s effect wore off…$"

Text_RepelWoreOffPrompt:
	.string "{STR_VAR_2}'s effect wore off…\n"
	.string "Would you like to use another one?$"

Text_UsedAnotherRepel:
	.string "{PLAYER} used the\n"
	.string "{STR_VAR_1}.$"
