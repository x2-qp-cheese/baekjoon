
password=1
right_passord='SKKU'
input_password=input('암호를 입력하세요:')
while password!=0:
    if  input_password=='SKKU':
        print('로그인 되었습니다.')
        break
    else:
        input_password=input('암호를 다시 입력하세요!:')
        password+=1
    if password==6:
        print('로그인 실패!')
        break



