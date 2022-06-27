# printf

AMAÇ

printf fonksiyonunu yazmak.
***
***
Aşağıda belirtilen yerde tanımda ilk parametre, str ("" içerisindeki yer); ikinci parametre, çok fazla değer alabileceği anlamına gelen ... konulur.

~~~
	ft_printf(const char *str, ...)
	ft_printf("-----str-----", -----args-----);
~~~
<stdarg.h> Fonksiyonlar
---
1- va_list   --> args'ın sonsuz değer aldığı yerdir. Biz bu yeri va_list olarak tanıtırız.
~~~
	va_list	args;
~~~

2- va_start  --> str[0]'dan başlatar args'ı, str içerisinde eşlemeye başlar.
~~~
	va_start(args, str);
~~~
Peki nasıl? Va_args yardımıyla. Aşağı bak!

3- va_args   --> "str" yani "format" = c ise; argümanların tamamını, yani "..." olan yerin tamamını va_arg'a atarız. 
va_arg; args'deki değerin, data type'ını (veri tipini) verir.
//va_arg'ın okuyacağı args'ın data type'ını (veri yapısını) nitelendirmiş oluruz. artık "formatta" yani "str"de c olan yerler int tipi alır. 
~~~
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
~~~
Şimdiiii... Biz va_arg'ın içerisine tüm args'ları atıyorsak nasıl oluyor da bilgisayar args'ları tek tek alıp, str'deki formatlarla eşleyebiliyor? 
yani ilk olarak "format = c" olduğunda 'a'yı okunduktan sonra "format = d" olduğunda 7'yi almalı.
peki bu nasıl oluyor? va_arg, okuduğu yeri tekrar okumaz (read gibi). Biz tüm args'ları içine atarız fakat o, aldığı yeri bir daha almaz. printf'in çalışma mantığı budur. Bu nedenle str ile args'lar sırası ile yazılmalıdır.
~~~
	ft_printf("%c\n%d\n%p\n%s\n%x\n%u\n%%", 'a', 7, "holla", 15, 0);
	           ----------str--------------  ---------args---------
~~~

4- va_end    --> args'ların bittiği anlamına getir.
~~~
	va_end(args);
~~~
