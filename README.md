## Not Ortalaması Hesaplama (C Dili)

Bu basit program, kullanıcının girdiği ders notlarının ortalamasını hesaplar ve geçip geçmediğini belirtir.

**Kullanılan yapılar:**
- `for` döngüsü
- `if-else` kontrol yapısı
- `float` veri tipi
  
## Menü Tabanlı Öğrenci Yönetim Sistemi (C Dili)

Bu basit program, kullanıcıya menü sistemi aracılığıyla öğrenci ekleme, listeleme ve çıkış yapma seçenekleri sunar. 

### Özellikler:
- Öğrenci adı girerek kayıt ekleyebilme
- Menüden seçim yapma sistemi (`switch-case` kullanılarak)
- `while(1)` ile sürekli çalışan döngü
- Kullanıcıdan gelen hatalı seçimlere karşı uyarı

### Kullanılan C Yapıları:
- Fonksiyonlar (`void ogrenciEkle()`, `void ogrenciListele()` vb.)
- Döngüler (`while`)
- Koşullar ve seçim yapısı (`switch-case`)
- `stdlib.h` ile `exit(0)` komutu

> Bu proje, C diline yeni başlayanlar için fonksiyon ve menü kullanımı konusunda temel bir örnektir.
---

## Sayı Tahmin Oyunu (C Dili)

Bu basit oyun, bilgisayarın rastgele tuttuğu 1 ile 100 arasındaki sayıyı tahmin etmeye yöneliktir.

### Özellikler:
- `rand()` fonksiyonu ile rastgele sayı üretme
- `do-while` döngüsü ile sürekli tahmin alma
- Kullanıcı doğru tahmin edene kadar ipuçları verme
- Kaç denemede bildiğini yazma

### Kullanılan Yapılar:
- `stdlib.h`, `time.h`
- `srand()` ve `rand()` kullanımı
- Koşullar (`if`, `else if`)
- Döngü (`do-while`)
## Basit ATM Uygulaması (C Dili)

Bu program, menü sistemi kullanarak ATM benzeri işlemler yapmanıza olanak sağlar. Kullanıcı bakiye görüntüleyebilir, para yatırabilir, para çekebilir ve çıkış yapabilir.

### Özellikler:
- Başlangıç bakiyesi: 1000 TL
- Menü tabanlı sistem
- `switch-case` ile işlem seçimi
- Hatalı giriş ve yetersiz bakiye kontrolü

### Kullanılan Yapılar:
- `float` değişkenler ile para işlemleri
- `switch-case`, `while` döngüsü
- `exit()` ile programdan çıkış
