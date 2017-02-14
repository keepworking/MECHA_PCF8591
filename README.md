# 메카솔루션 PCF8591 아두이노 라이브러리

4개의 ADC와 1개의 DAC를 내장한 PCF8591제품의 라이브러리 모듈입니다.

 * 익숙한 아두이노의 AnalogRead 함수나 AnalogWrite 함수의 형태로 기능이 제공됩니다.
 * 대신 DAC모드 비활성화가 되지 않으니 이러한 기능이 필요하다면 본 라이브러리를 수정해서 재배포 부탁드립니다.
 * 라이브러리에 뭔 의미가 있겠습니까? 마음껏 쓰세요


기본적인 사용법을 소개 하고자 합니다.

## 소스코드

### 필수 헤더

기본적으로 IIC 통신을 위해 아두이노의 Wire 라이브러리를 함께 사용합니다.

```cpp
#include <Wire.h>
#include <MECHA_PCF8591.h>

MECHA_PCF8591 pcf;//객체 명은 자유로이 사용 가능합니다.

void setup(){
	Wire.begin();//IIC 통신 사용을 위해 Wire 설정을 해주어야 합니다.
}
```

### IIC Address 설정하기

기본 IIC Address를 사용하고 있다면 필요없지만 IIC주소를 변경해서 사용중이라면 다음과 같이 사용이 가능합니다.

```cpp
pcf.setAddress(0x49);
```

### analogRead()

PCF8591에는 4개의 아날로그 핀이 있습니다. (0번 ~ 3번)

```cpp
int AnalogData = pcf.analogRead(0);

Serial.println(AnalogData);
```

### analogWrite()

아쉽게도 PCF8591에는 DAC핀이 하나 밖에 없습니다. 핀번호를 정해줄 필요는 없겠지요?

```cpp
pcf.analogWrite(243);
```

### 마무리

좀더 다양한 정보는 [메카솔루션](http://mechasolution.com) 과 [오픈랩](http://blog.naver.com/roboholic84) 에서 알아보실 수 있습니다.
