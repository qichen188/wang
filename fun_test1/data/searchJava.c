searchJava()
{

	web_url("www.runoob.com", 
		"URL=https://www.runoob.com/?s=java", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.runoob.com/html/html-tutorial.html", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("style.css_2", 
		"URL=https://www.runoob.com/wp-content/themes/runoob/style.css?v=1.156", 
		"Resource=1", 
		"Referer=https://www.runoob.com/?s=java", 
		"Snapshot=t213.inf", 
		LAST);

	web_url("weipayimg.png_2", 
		"URL=https://static.runoob.com/images/dashang/weipayimg.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.runoob.com/?s=java", 
		"Snapshot=t214.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("hm.js_2", 
		"URL=https://hm.baidu.com/hm.js?3eec0b7da6548cf07db3bc477ea905ee", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.runoob.com/?s=java", 
		"Snapshot=t215.inf", 
		LAST);

	web_url("cd-icon-close.svg_2", 
		"URL=https://www.runoob.com/wp-content/themes/runoob/assets/img/cd-icon-close.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://www.runoob.com/?s=java", 
		"Snapshot=t216.inf", 
		LAST);

	web_url("hm.gif_2", 
		"URL=https://hm.baidu.com/hm.gif?cc=1&ck=1&cl=24-bit&ds=1920x1080&vl=962&et=0&fl=32.0&ja=1&ln=zh-cn&lo=0&lt=1597460066&rnd=1384449592&si=3eec0b7da6548cf07db3bc477ea905ee&su=https%3A%2F%2Fwww.runoob.com%2Fhtml%2Fhtml-tutorial.html&v=1.2.75&lv=3&sn=44504&r=0&ww=1920&ct=!!&tt=java%20%E7%9A%84%E6%90%9C%E7%B4%A2%E7%B5%90%E6%9E%9C", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.runoob.com/?s=java", 
		"Snapshot=t217.inf", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}