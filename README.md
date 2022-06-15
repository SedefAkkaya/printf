# printf

AMAÇ

printf fonksiyonunu yazmak.
***
Aşağıda belirtilen yerde tanımda ilk parametre, str ("" içerisindeki yer); ikinci parametre, sonsuz değer alabileceği anlamına gelen ... konulur.

~~~
	va_list	args;
~~~
1- va_list   --> args'ın sonsuz değer aldığı yerdir. Biz bu yeri va_list olarak tanıttık.


~~~
	va_start(args, str);
~~~
va_start  --> args'ı, str[0] dan başlayarak yazmaya başlar. Peki nasıl? Va_args yardımıyla. Aşağı bak!

~~~
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
~~~
va_args   -->

va_and    -->
