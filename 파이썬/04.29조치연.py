menu=['아이스크림','커피','음료','디저트','아이스크림케이크']
아이스크림=3300
커피=4500
음료=5000
디저트=3300
아이스크림케이크=32000
price_menu=0

choice_menu=input('반갑습니다.00지점 배서킨카페입니다.\n원하는 메뉴를 선택하세요(아이스크림,커피,음료,디저트,아이스크림케이크):')
if choice_menu in menu:
    if choice_menu=='아이스크림':
        price_menu=3300
    elif choice_menu=='커피':
        price_menu=4500
    elif choice_menu=='음료': 
        price_menu=5000
    elif choice_menu=='디저트':
        price_menu=3300
    elif choice_menu=='아이스크림케이크':
        price_menu=32000

if choice_menu in menu:
    count=int(input('원하는 개수를 입력해주세요:'))
    print('선택메뉴:%s, 개수:%d, 총금액:%d원입니다'%(choice_menu,count,price_menu*count))
    a=input('결제방식을 선택해주세요.(현금,카드):')
    print('%s 을/를 %s넣는 곳에 넣어주세요'%(a,a))
    print('감사합니다')
else:
    print('오류')