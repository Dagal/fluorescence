
from gumps import *
from data import *
import client

def create(args):
    g = GumpMenu("gamewindow", 20, 20, True)
    g.closable = False

    g.addBackground((0, 0, 810, 610), 2620)
    g.addWorldView((5, 5, 800, 600))


    #<?xml version="1.0"?>
#<gump x="20" y="20" closable="0" draggable="1" inbackground="1">
    #<page number="0">
        #<background template="blackbackground" x="0" y="0" width="810" height="610" />
        #<worldview name="worldview" x="5" y="5" width="800" height="600" />
        #<sysloglabel x="7" y="7" width="250" height="560" />
    #</page>

    #<page number="1" /> <!-- empty page to prevent the line from popping up at startup :) -->

    #<page number="2">
        #<image template="solid" x="5" y="581" width="608" height="22" color="#dddddd33" />
        #<lineedit x="7" y="583" width="600" name="speechtext" action="sendspeech" font="unifont1" />
    #</page>
#</gump>
