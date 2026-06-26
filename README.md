<!DOCTYPE html>
<html lang="ko">
<head>
  <meta charset="UTF-8">
  <title>용돈 관리 프로그램</title>
  <style>
    body {
      font-family: "Segoe UI", sans-serif;
      background: linear-gradient(135deg, #ffecd2 0%, #fcb69f 100%);
      color: #2c3e50;
      margin: 0;
      padding: 0;
    }
    header {
      background: linear-gradient(90deg, #ff6a00, #ee0979);
      color: white;
      text-align: center;
      padding: 40px 20px;
      box-shadow: 0 4px 10px rgba(0,0,0,0.3);
    }
    header h1 {
      font-size: 3em;
      margin: 0;
      text-shadow: 2px 2px 8px rgba(0,0,0,0.4);
    }
    header p {
      font-size: 1.2em;
      margin-top: 10px;
    }
    section {
      padding: 40px;
    }
    h2 {
      color: #e74c3c;
      border-bottom: 3px solid #e74c3c;
      display: inline-block;
      margin-bottom: 20px;
    }
    .feature {
      background: white;
      padding: 20px;
      border-radius: 12px;
      margin-bottom: 20px;
      box-shadow: 0 6px 15px rgba(0,0,0,0.1);
      transition: transform 0.3s;
    }
    .feature:hover {
      transform: scale(1.05);
    }
    .feature span {
      font-weight: bold;
      color: #2980b9;
      font-size: 1.2em;
    }
    .example {
      background: linear-gradient(135deg, #fdfbfb 0%, #ebedee 100%);
      padding: 20px;
      border-radius: 12px;
      margin-top: 30px;
      box-shadow: 0 4px 12px rgba(0,0,0,0.1);
    }
    footer {
      background: linear-gradient(90deg, #00c6ff, #0072ff);
      color: white;
      text-align: center;
      padding: 20px;
      font-size: 1.2em;
      font-weight: bold;
      letter-spacing: 2px;
      box-shadow: 0 -4px 10px rgba(0,0,0,0.3);
    }
    footer span {
      color: #ffe600;
      text-shadow: 1px 1px 5px black;
    }
  </style>
</head>
<body>
  <header>
    <h1>💰 간단한 용돈 관리 프로그램</h1>
    <p>수입과 지출을 기록하고, 카테고리별로 손쉽게 조회할 수 있는 프로그램</p>
  </header>

  <section>
    <h2>📌 주요 기능</h2>

    <div class="feature">
      <span>1️⃣ 지출 내역 추가</span><br>
      - 금액 입력<br>
      - 카테고리 선택<br>
      - 메모 작성<br>
      ➡️ 지출 기록을 저장합니다.
    </div>

    <div class="feature">
      <span>2️⃣ 수입 내역 추가</span><br>
      - 금액 입력<br>
      - 메모 작성<br>
      ➡️ 수입 기록을 저장합니다.
    </div>

    <div class="feature">
      <span>3️⃣ 전체 내역 조회</span><br>
      - 지금까지 기록된 <b>모든 내역</b>을 확인할 수 있습니다.
    </div>

    <div class="feature">
      <span>4️⃣ 카테고리별 조회</span><br>
      - 카테고리별 <b>총 지출 금액</b>을 기준으로 순위를 확인할 수 있습니다.
    </div>

    <div class="feature">
      <span>5️⃣ 전체 조회</span><br>
      - 수입과 지출을 반영하여 <b>현재 잔액</b>을 보여줍니다.
    </div>

    <div class="example">
      <h2>🏆 프로그램 활용 예시</h2>
      - 오늘 점심값(5,000원, 식비) 기록<br>
      - 아르바이트 수입(50,000원) 기록<br>
      - 카테고리별 지출 확인 → 식비가 가장 많음<br>
      - 전체 조회 → 현재 잔액 45,000원
    </div>
  </section>

  <footer>
    ✨ Made by <span>박시우</span>, <span>박진서</span>, <span>박유찬</span> ✨
  </footer>
</body>
</html>
