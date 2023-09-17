import pyautogui as pg
import keyboard


region_battle = (1267, 457, 171, 58)

def check_battle():
   return pg.locateOnScreen('imagens/region_battle.png', region=region_battle)

# is_battle = check_battle()
# print(is_battle)


def kill_monster():
	contador = 0
	while check_battle() == None:
		pg.press('space')
#		while check_battle() != None:
		pg.sleep(5)
		print('esperando os monstros morrerem')
		print('procurando outros monstros')
		pg.sleep(5)

kill_monster()






