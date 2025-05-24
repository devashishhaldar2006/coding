str=' hello world ' #STRIPS leading character and tailing character removed
print(str.strip())

str2='ABCHELLOABC'
print(str2.strip('ABC'))

#LSTRIP strips leading spaces only
str2=' HELLO '
print(str2.lstrip())

str2='ABCHELLOABC'
print(str2.lstrip('ABC'))

#RSTRIP strips tailing spaces only
str2=' HELLO '
print(str2.rstrip())

str2='ABCHELLOABC'
print(str2.rstrip('ABC'))

#convert to list
str2='DEVA DOES HIS WORK'
print(str2.split())

str2='DEVA#DOES#HIS#WORK'
print(str2.split('#'))

#join method
str=['P','Y','T','H','O','N']
print(''.join(str))
print('-'.join(str))

#index method
str='apple'
print(str.index('l'))#will give error of there is no index

#index method
str='apple'
print(str.index('p',2))#start-end

#find method
str='apple'
print(str.find('t'))#will give -1 of there is no index

#replace method
str2='DEVA$DOES$HIS$WORK'
print(str2.replace('$',' '))#old new count

#last occurence index ---rfind method
str3='malayalam'
print(str3.rfind('a'))

#lower case
str='DEVA IS A GHOUL'
print(str.lower())

#upper case
str='deva is'
print(str.upper())

#capitalize
str='deva is'
print(str.capitalize())

#swap case
str='deva IS'
print(str.swapcase())

#is upper is lower
str='deva is'
print(str.islower())

str='deva iS'
print(str.islower())

str='DEVA IS'
print(str.isupper())
