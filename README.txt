# prolab1.2

Lojik devre benzetimi, basit devre elemanlarından oluşan mantıksal bir devreyi kapılar aracılığıyla yayılım gecikmelerini de dikkate alarak simule eder. Kullanıcı devreyi dosyadan yükleyebilir, çalıştırabilir, değerleri değiştirebilir ve güncel değerlerini görüntüleyebilir.

1.Giriş
Lojik devre benzetimi konsoldan çalışan bir programdır. İlk çalıştırıldığında verilen komutlara göre o komutlarda belirlenen işlemleri yapar ve buna göre içerisindeki devreyi düzenler. Kullanıcı devredeki girişleri ve çıkışları mevcut değerlerle ilişkilendirip daha sonra istediği gibi lojik-1 veya lojik-0 olarak değiştirebilir. Tüm değerleri güncel olarak görüntüleyebilir ve verdiği komutların kaydedildiği dosyadan yaptığı işlemleri görebilir. Yine verilen komutlardan birini kullarak eğer isterse benzetimden çıkış yapabilir. Kullanıcının girdiği komutları tutan komut.txt dosyasının yanında ayriyeten bir log dosyası da komutların girildiği tarihi, saati ve girilen komutla birlikte o komutun açıklamasını tutmaktadır. 

2. Temel Bilgiler
Proje geliştiriminde tümleşik geliştirme ortamı olarak “CodeBlocks” programının  17.12 sürümü kullanılmıştır. 

3 Yazılım Tasarımı
Proje geliştirilirken verilen komutlara yönelik çalışacak şekilde kodlanmıştır ve dosya içindeki devreyi daha iyi çalıştırabilmek için struct yapısı kullanılmıştır. Programımızın komut alma kısmı büyük-küçük harf ayrımı yapmadan komutları değerlendirir.
• Y komutu “devre.txt” dosyasından devreyi yükler.
• I komutu “deger.txt” icindeki değerlerle devreyi ilişkilendirir.
• H komutu yanında girilen kapı ismine göre o kapıyı Lojik-1 yapar.
• L komutu yanında girilen kapı ismine göre o kapıyı Lojik-0 yapar.
• S komutu devreyi simüle eder.
• G komutu yanında girilen kapı ismine göre o kapının güncel değerini (0 veya1) konsol ekranında kullanıcıya gösterir.
• G* komutu tüm uçların güncel seviyesini (0 veya 1) konsolda gösterir.
• K komutu “komut.txt” dosyası içindeki komutları konsoldan kullanıcıya gösterir.
• C komutu Lojik Devre Benzetimi’nden çıkış yapar.
