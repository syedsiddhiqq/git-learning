from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time
import re

driver = webdriver.Chrome()
driver.get("https://discordapp.com/login")
username = driver.find_element_by_xpath("/html/body/div/div[1]/div/div[2]/div/form/div/div[3]/div[1]/div/input")
username.clear()
username.send_keys("abishekgamer12345@gmail.com")
password = driver.find_element_by_xpath("/html/body/div/div[1]/div/div[2]/div/form/div/div[3]/div[2]/div/input")
password.clear()
password.send_keys("abishek@123")
driver.find_element_by_xpath("/html/body/div/div[1]/div/div[2]/div/form/div/div[3]/button[2]").click()
temp = 'dfdf'
while True:
    try:
        a = [];
        x = driver.find_element_by_xpath("/html/body/div/div[1]/div/div[1]/div/div/div[2]/div[2]/div[2]/div[2]/div[1]/div/div/div[1]")
        a = x.find_elements_by_css_selector("div.containerCozyBounded-1rKFAn");
        if(temp != a[-1]):
            temp = a[-1]
            # print(a[-1])
            authorname = temp.find_element_by_class_name("username-_4ZSMR")
            print(authorname.text)
            if(authorname.text == 'GiveawayBot'):
                # print(str(a[-1].text).split("\n")[2])
                fbamount = re.findall("\d+m",str(a[-1].text).split("\n")[2])
                fbamount = re.findall("\d+",fbamount[0])
#                 for git learning added some lines
#                 print(fbamount)
#                 if(int(fbamount[0])>0):
#                     print("yes")
#                   for git purposes commented some lines.
                    time.sleep(0.5)
                    r = []
                    r = a[-1].find_elements_by_class_name("reaction-1ELvT8")
                    print(r)
                    r[-1].click()



    except:
        continue;
