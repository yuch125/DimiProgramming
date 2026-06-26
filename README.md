<!DOCTYPE html>
<html lang="ko">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>용돈 기입장 README</title>

  <style>
    body {
      font-family: "Malgun Gothic", Arial, sans-serif;
      background-color: #f4f6f8;
      color: #222;
      line-height: 1.7;
      margin: 0;
      padding: 0;
    }

    header {
      background-color: #2c3e50;
      color: white;
      text-align: center;
      padding: 40px 20px;
    }

    header h1 {
      margin: 0;
      font-size: 36px;
    }

    header p {
      margin-top: 10px;
      font-size: 18px;
    }

    main {
      max-width: 1000px;
      margin: 40px auto;
      padding: 0 20px;
    }

    section {
      background-color: white;
      margin-bottom: 25px;
      padding: 25px;
      border-radius: 12px;
      box-shadow: 0 3px 10px rgba(0, 0, 0, 0.08);
    }

    h2 {
      color: #2c3e50;
      border-left: 6px solid #3498db;
      padding-left: 12px;
      margin-top: 0;
    }

    h3 {
      color: #34495e;
      margin-top: 25px;
    }

    ul {
      padding-left: 25px;
    }

    li {
      margin-bottom: 6px;
    }

    .feature-box {
      background-color: #f8fbff;
      border: 1px solid #dbeafe;
      padding: 18px;
      border-radius: 10px;
      margin-top: 15px;
    }

    pre {
      background-color: #1e1e1e;
      color: #f8f8f2;
      padding: 18px;
      border-radius: 10px;
      overflow-x: auto;
      font-size: 14px;
    }

    code {
      font-family: Consolas, monospace;
    }

    table {
      width: 100%;
      border-collapse: collapse;
      margin-top: 15px;
    }

    th, td {
      border: 1px solid #ccc;
      padding: 12px;
      text-align: center;
    }

    th {
      background-color: #ecf0f1;
      color: #2c3e50;
    }

    .github {
      background-color: #f1f8ff;
      border-left: 6px solid #3498db;
      padding: 15px;
      border-radius: 8px;
      word-break: break-all;
    }

    .made-by {
      text-align: center;
      font-size: 18px;
      font-weight: bold;
    }

    footer {
      text-align: center;
      padding: 30px;
      color: #777;
    }
  </style>
</head>

<body>

  <header>
    <h1>용돈 기입장</h1>
    <p>C언어로 제작한 학생용 용돈 관리 프로그램</p>
  </header>

  <main>

    <section>
      <h2>프로젝트 소개</h2>
      <p>
        <strong>용돈 기입장</strong>은 학생들이 자신의 용돈 수입과 지출을 쉽게 기록하고 관리할 수 있도록 만든
        C언어 기반 콘솔 프로그램입니다.
      </p>
      <p>
        사용자는 용돈을 받은 내역과 사용한 내역을 입력할 수 있으며,
        전체 내역 조회와 카테고리별 조회 기능을 통해 자신의 소비 현황을 확인할 수 있습니다.
      </p>
      <p>
        이 프로그램은 수업 시간에 배운 <strong>배열, 조건문, 반복문, 함수</strong>를 활용하여 제작되었습니다.
      </p>
    </section>

    <section>
      <h2>프로젝트 목적</h2>
      <p>
        학생들은 용돈을 받은 뒤 어디에 얼마나 사용했는지 정확히 기억하지 못하는 경우가 많습니다.
        이 프로젝트는 이러한 문제를 해결하기 위해 용돈의 수입, 지출, 카테고리, 메모를 기록하고
        이를 쉽게 조회할 수 있는 프로그램을 만드는 것을 목표로 하였습니다.
      </p>
    </section>

    <section>
      <h2>주요 기능</h2>

      <div class="feature-box">
        <h3>1. 지출 내역 추가</h3>
        <p>
          사용자가 사용한 용돈의 금액, 카테고리, 지출 내용을 입력할 수 있습니다.
        </p>
        <p>지출 카테고리는 다음과 같습니다.</p>
        <ul>
          <li>식비</li>
          <li>문구</li>
          <li>교통</li>
          <li>여가</li>
          <li>저축</li>
          <li>기타</li>
        </ul>

        <pre><code>&lt;용돈 지출 추가&gt;

사용한 용돈의 금액을 작성해 주세요 :

용돈을 사용한 카테고리를 선택해 주세요.
1. 식비
2. 문구
3. 교통
4. 여가
5. 저축
6. 기타

지출 내용을 입력하세요 :</code></pre>
      </div>

      <div class="feature-box">
        <h3>2. 수입 내역 추가</h3>
        <p>
          사용자가 받은 용돈이나 추가 수입 금액을 입력할 수 있습니다.
          수입 금액과 수입 내용을 입력하면 해당 내역이 저장됩니다.
        </p>

        <pre><code>&lt;용돈 수입 추가&gt;

얻은 용돈의 금액을 입력하세요 :

수입 내용을 입력하세요 :</code></pre>
      </div>

      <div class="feature-box">
        <h3>3. 전체 내역 조회</h3>
        <p>
          지금까지 입력한 모든 수입과 지출 내역을 한 번에 확인할 수 있습니다.
          전체 내역 조회 화면에서는 구분, 카테고리, 금액, 메모, 총 잔액을 확인할 수 있습니다.
        </p>

        <pre><code>[내역조회]

구분    |  카테고리  |    금액    |    메모
수입    |    수입    |     3000   | 용돈
지출    |    식비    |     1500   | 밥
지출    |    교통    |     1000   | 버스비

총 잔액 : 500</code></pre>
      </div>

      <div class="feature-box">
        <h3>4. 카테고리별 조회</h3>
        <p>
          입력된 지출 내역을 바탕으로 카테고리별 사용 금액을 확인할 수 있습니다.
          이 기능을 통해 사용자가 어떤 분야에 용돈을 많이 사용했는지 쉽게 파악할 수 있습니다.
        </p>

        <pre><code>[카테고리별 조회]

순위  |  카테고리  | 지출 금액
 1    |   교통     | 3000
 2    |   식비     | 1500
 3    |   문구     | 0
 4    |   여가     | 0
 5    |   저축     | 0
 6    |   기타     | 0</code></pre>
      </div>

      <div class="feature-box">
        <h3>5. 프로그램 종료</h3>
        <p>
          메인 메뉴에서 <strong>0</strong>을 입력하면 프로그램을 종료할 수 있습니다.
        </p>
      </div>
    </section>

    <section>
      <h2>메인 화면 구성</h2>
      <p>
        프로그램을 실행하면 다음과 같은 메인 화면이 출력됩니다.
      </p>

      <pre><code>========================================
           &lt; 나의 용돈 기입장 &gt;

&lt; 1. 지출 내역 추가 &gt;
&lt; 2. 수입 내역 추가 &gt;
&lt; 3. 전체 내역 조회 &gt;
&lt; 4. 카테고리 별 내역 조회 &gt;
&lt; 0. 종료 &gt;

원하시는 메뉴의 번호를 선택하세요 :
========================================</code></pre>
    </section>

    <section>
      <h2>프로그램 구조</h2>
      <p>
        이 프로그램은 여러 기능을 함수로 나누어 구성하였습니다.
      </p>

      <table>
        <tr>
          <th>함수명</th>
          <th>기능</th>
        </tr>
        <tr>
          <td>main()</td>
          <td>메인 화면을 출력하고 사용자의 메뉴 선택을 처리합니다.</td>
        </tr>
        <tr>
          <td>add_expense()</td>
          <td>지출 금액, 카테고리, 지출 내용을 입력받아 저장합니다.</td>
        </tr>
        <tr>
          <td>add_income()</td>
          <td>수입 금액과 수입 내용을 입력받아 저장합니다.</td>
        </tr>
        <tr>
          <td>view_all()</td>
          <td>저장된 전체 수입과 지출 내역을 출력합니다.</td>
        </tr>
        <tr>
          <td>view_by_category()</td>
          <td>카테고리별 지출 금액을 조회하여 출력합니다.</td>
        </tr>
      </table>
    </section>

    <section>
      <h2>사용한 핵심 개념</h2>
      <ul>
        <li>변수</li>
        <li>배열</li>
        <li>조건문</li>
        <li>반복문</li>
        <li>함수</li>
        <li>입력과 출력</li>
        <li>문자열 저장</li>
        <li>메뉴 선택 구조</li>
      </ul>
    </section>

    <section>
      <h2>데이터 관리 방식</h2>
      <p>
        프로그램은 입력된 수입과 지출 정보를 배열에 저장합니다.
        각 내역은 구분, 카테고리, 금액, 메모로 관리됩니다.
      </p>

      <table>
        <tr>
          <th>항목</th>
          <th>설명</th>
        </tr>
        <tr>
          <td>구분</td>
          <td>수입인지 지출인지 구분합니다.</td>
        </tr>
        <tr>
          <td>카테고리</td>
          <td>지출의 경우 식비, 문구, 교통, 여가, 저축, 기타 중 하나로 저장합니다.</td>
        </tr>
        <tr>
          <td>금액</td>
          <td>수입 또는 지출 금액을 저장합니다.</td>
        </tr>
        <tr>
          <td>메모</td>
          <td>사용자가 입력한 내용을 저장합니다.</td>
        </tr>
      </table>

      <p>
        수입과 지출을 구분하여 저장하기 때문에 전체 내역 조회 시 총 잔액을 계산할 수 있습니다.
      </p>
    </section>

    <section>
      <h2>실행 방법</h2>
      <p>
        C언어 컴파일러가 설치된 환경에서 실행할 수 있습니다.
      </p>

      <h3>컴파일</h3>
      <pre><code>gcc main.c -o allowance</code></pre>

      <h3>실행</h3>
      <pre><code>./allowance</code></pre>

      <h3>Windows 실행 예시</h3>
      <pre><code>gcc main.c -o allowance.exe
allowance.exe</code></pre>

      <p>
        소스 파일 이름이 <code>main.c</code>가 아니라면 실제 파일 이름에 맞게 변경하여 실행하면 됩니다.
      </p>
    </section>

    <section>
      <h2>GitHub</h2>
      <p>
        프로젝트 소스 코드는 아래 GitHub 저장소에서 확인할 수 있습니다.
      </p>

      <div class="github">
        https://github.com/yuch125/DimiProgramming.git
      </div>
    </section>

    <section>
      <h2>Made By</h2>
      <p class="made-by">
        박시우 · 박유찬 · 박진서
      </p>
    </section>

  </main>

  <footer>
    2026 Programming Project - Allowance Book
  </footer>

</body>
</html>
