 Reflection

1. What is the invariant structure of your game?

Invariant structure dari game ini adalah urutan loop permainan yang selalu terjadi dalam setiap ronde. Urutannya adalah:
Player click → System calculates score → Score is updated → Check if target score is reached.
Urutan ini tidak boleh berubah karena setiap langkah bergantung pada langkah sebelumnya. Sistem harus mengetahui aksi pemain terlebih dahulu sebelum menghitung score, kemudian score harus diperbarui sebelum sistem mengecek apakah target score sudah tercapai.
Loop ini merupakan struktur utama permainan yang terus berulang sampai pemain mencapai target score.


2. What parts are mutable?

Bagian yang mutable dalam game ini adalah elemen-elemen yang bisa diubah tanpa mengubah struktur utama loop permainan.
Contohnya adalah:

- Score gain setiap klik
- Target score yang harus dicapai
- Score multiplier atau bonus score

Elemen-elemen ini hanya mempengaruhi perilaku permainan seperti seberapa cepat pemain mendapatkan score, tetapi tidak mengubah urutan dasar dari sistem permainan.


3. If you wanted to add a new feature, which class would change?

Jika ingin menambahkan fitur baru, perubahan kemungkinan besar akan terjadi di class `GameSession`.
Misalnya jika ingin menambahkan fitur seperti bonus score, combo multiplier, atau reward khusus setelah beberapa klik, maka perubahan akan terjadi pada fungsi yang berhubungan dengan perhitungan score seperti `CalculateScore()` atau `UpdateScore()`.
Struktur loop utama tetap tidak perlu diubah karena fitur tersebut hanya mempengaruhi bagaimana score dihitung.


4. If you changed the loop order, what would break?

Jika urutan loop diubah, maka logika permainan bisa menjadi tidak konsisten.
Contohnya jika sistem mengecek target score sebelum score diperbarui, maka kemenangan tidak akan terdeteksi dengan benar. Sistem mungkin akan terus menjalankan loop walaupun pemain sebenarnya sudah mencapai target score.
Karena setiap langkah bergantung pada langkah sebelumnya, perubahan urutan akan merusak alur logika permainan.
