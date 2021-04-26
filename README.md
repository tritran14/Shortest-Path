# Shortest-Path
Một công ty bưu điện chịu trách nhiệm chuyển phát thư một cách nhanh chóng 
giữa các thành phố. Có tất cả N thành phố được đánh số từ 1..N, với M con đường hai 
chiều nối giữa các thành phố. Việc di chuyển trên mỗi con đường mất một khoảng thời 
gian là T. Bức thư từ thành phố A muốn gửi đến thành phố B phải đi theo một quy trình 
do công ty đặt ra. Đầu tiên nhân viên bưu điện mất một khoảng thời gian T1 vận chuyển 
thư từ thành phố A đến công ty bưu điện đặt tại thành phố 1 để kiểm tra tính hợp lệ của 
các bức thư, sau đó mất thêm một khoảng thời gian T2 để đưa các bức thư từ công ty 
đến thành phố B. Như vậy thời gian tổng cộng để gửi 1 bức thư từ thành phố A đến thành 
phố B là T1 T2.
Yêu cầu:
- Biết rằng có rất nhiều yêu cầu gửi thư giữa các thành phố khác nhau. 
- Hãy tính thời gian ngắn nhất để một bức thư được gửi từ thành phố này đến thành phố
khác.
- Sử dụng BFS & DFS
Input: file .txt· 
- Dòng đầu tiên gồm 3 số nguyên N (2*K≤ N ≤50000), M (N-1 ≤ M ≤ 100000) và K (1≤ 
K ≤25000) cho biết số lượng thành phố, số con đường hai chiều, và số yêu cầu gửi thư 
giữa các thành phố.
- M dòng tiếp theo, mỗi dòng ghi 3 số nguyên dương L, P, T (1≤L≠P≤N, 1≤T≤ 2000) 
biểu diễn cho việc di chuyển trên con đường hai chiều nối thành phố L và P, sẽ mất 
khoảng thời gian là T.
- K dòng tiếp theo, mỗi dòng gồm 2 số nguyên A, B biểu diễn cho yêu cầu gửi thư từ
thành phố A đến thành phố B.
- Output: Ghi ra file .txt gồm K dòng tương ứng với K yêu cầu gửi thư trong input, mỗi 
dòng gồm một số nguyên duy nhất biểu diễn thời gian ngắn nhất gửi một bức thư từ
thành phố này đến thành phố khác
