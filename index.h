const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML><html>
<head>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <meta charset="UTF-8" />
  <title>Кормилка</title>
  
</head>
<body>
  <div>
    <h2>Кормилка v1.0</h2>
    
  </div>
  
  <div class="header_container">
    <p class="header_mini" id="mini_header">ВРЕМЯ КОРМЕЖКИ
    </p>
      <img src="data:image/png;base64,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"
      onclick="show_settings()" name="settings" >
  </div>
  <div class="table_container">

    <table class="table_item">
      <tbody class="internal_container">
        <tr>
          <td><button class="table_button" onclick="toggle_style(1)" id="butt1">00:00</button></td>
          <td><button class="table_button" onclick="toggle_style(2)" id="butt2">01:00</button></td>
          <td><button class="table_button" onclick="toggle_style(3)" id="butt3">02:00</button></td>
          <td><button class="table_button" onclick="toggle_style(4)" id="butt4">03:00</button></td>
        </tr>
        <tr>
          <td><button class="table_button" onclick="toggle_style(5)" id="butt5">04:00</button></td>
          <td><button class="table_button" onclick="toggle_style(6)" id="butt6">05:00</button></td>
          <td><button class="table_button" onclick="toggle_style(7)" id="butt7">06:00</button></td>
          <td><button class="table_button" onclick="toggle_style(8)" id="butt8">07:00</button></td>
        </tr>
        <tr>
          <td><button class="table_button" onclick="toggle_style(9)" id="butt9">08:00</button></td>
          <td><button class="table_button" onclick="toggle_style(10)" id="butt10">09:00</button></td>
          <td><button class="table_button" onclick="toggle_style(11)" id="butt11">10:00</button></td>
          <td><button class="table_button" onclick="toggle_style(12)" id="butt12">11:00</button></td>
        </tr>
        <tr>
          <td><button class="table_button" onclick="toggle_style(13)" id="butt13">12:00</button></td>
          <td><button class="table_button" onclick="toggle_style(14)" id="butt14">13:00</button></td>
          <td><button class="table_button" onclick="toggle_style(15)" id="butt15">14:00</button></td>
          <td><button class="table_button" onclick="toggle_style(16)" id="butt16">15:00</button></td>
        </tr>
        <tr>
          <td><button class="table_button" onclick="toggle_style(17)" id="butt17">16:00</button></td>
          <td><button class="table_button" onclick="toggle_style(18)" id="butt18">17:00</button></td>
          <td><button class="table_button" onclick="toggle_style(19)" id="butt19">18:00</button></td>
          <td><button class="table_button" onclick="toggle_style(20)" id="butt20">19:00</button></td>
        </tr>
        <tr>       
          <td><button class="table_button" onclick="toggle_style(21)" id="butt21">20:00</button></td>
          <td><button class="table_button" onclick="toggle_style(22)" id="butt22">21:00</button></td>
          <td><button class="table_button" onclick="toggle_style(23)" id="butt23">22:00</button></td>
          <td><button class="table_button" onclick="toggle_style(24)" id="butt24">23:00</button></td>
        </tr>
      </tbody>
    </table>
  </div>
  <div class="countity_container">
    
    <div class="countity_style" id="countity">
      Кормежек в день - 0
    </div>
  </div>
  <div class="main_container">
    <div class="weight_radio_group">
      <div class="weight_radio_group_item">
        <input id="radio-1" type="radio" name="radio" value="1" checked>
        <label for="radio-1">20 грамм</label>
      </div>
      <div class="weight_radio_group_item">
        <input id="radio-2" type="radio" name="radio" value="2">
        <label for="radio-2">30 грамм</label>
      </div>
      <div class="weight_radio_group_item">
        <input id="radio-3" type="radio" name="radio" value="3">
        <label for="radio-3">50 грамм</label>
      </div>
      
    </div>
    </div>
  <div class="bottom_container">
    <button type="button" name="submit">Покормить сейчас</button>
    <button type="button" name="submit" onclick="updatedata()">Применить</button>
  </div>



<script>
  function show_settings(){
    var xhr = new XMLHttpRequest();

      // Задаем метод, URL и асинхронность запроса
      xhr.open("GET", "/settings", true);

      // Определяем обработчик события для готовности запроса
      xhr.onreadystatechange = function () {
        if (xhr.readyState == 4 && xhr.status == 200) {
          // Выводим полученные данные в консоль (можно изменить на свой вывод)
          console.log(xhr.responseText);
        }
      };
      xhr.send();
      //server.on("/settings", HTTP_GET, handleSettings);
    }

  function updatedata(){
    var xhr = new XMLHttpRequest();
      xhr.onreadystatechange = function () {
        console.log(10);
        if (xhr.readyState == 4 && xhr.status == 200) {
          document.getElementById("sensorValue").innerHTML = xhr.responseText;
        }
      };
      xhr.open("GET", "/update", true);
      xhr.send();
  }
  function updateSliderPWM(element) {
    var slider_value = document.getElementById("pwmSlider").value;
    document.getElementById("textslider_value").innerHTML = slider_value;
    console.log(slider_value);
    var xhr = new XMLHttpRequest();
    xhr.open("GET", "/slider?value="+slider_value, true);
    xhr.send();
  }

  var clicked = 0;

  function toggle_style(numb){
    var btn = document.getElementById('butt' + numb);
    
    if (btn.style.background == 'rgb(255, 102, 0)') {
      clicked = clicked - 1;
      btn.style.background = '#ffe0a6';
    }else{
      btn.style.background = '#ff6600';
      clicked = clicked + 1;
    }
    console.log (clicked);
    document.getElementById('countity').textContent = 'Кормежек в день - ' + clicked;
  }
  

</script>
</body>

<style>
  html {
    font-family: Times New Roman; 
    display: inline-block; 
    text-align: center;
  }
  h2 {
    font-size: 2.3rem;
  }
  p {
    font-size: 20px;
    padding-left: 45px;
  }
  body {
    max-width: 400px; 
    margin:0px auto; 
    padding-bottom: 25px;
  }

  
  .weight_button_group {
    display: inline-block;
    overflow: hidden;
  }
  .weight_button_item{
    display: inline-block;
    width: auto;
  }
  .weight_radio_group input[type=radio] {
    display: none;
  }
  .weight_radio_group label {
    display: inline-block;
    cursor: pointer;
    padding: 0px 15px;
    line-height: 34px;
    border: 1px solid #999;
    user-select: none;
    text-transform: uppercase;
    font-weight: bold;
  }
  .weight_radio_group .weight_radio_group_item:first-child label {
  border-radius: 6px 6px 0 0;
  }
  .weight_radio_group .weight_radio_group_item:last-child label {
  border-radius: 0 0 6px 6px;
  border-right: 1px solid #999;
  }
  .weight_radio_group input[type=radio]:checked + label {
  background: #ffe0a6;
  }
  .weight_radio_group label:hover {
  color: #666;
  }
  .weight_radio_group input[type=radio]:disabled + label {
  background: #efefef;
  color: #666;
  }
  
  button[name="submit"] { 
    width: 300px;
    border: 1px solid #666;
    border-radius: 7px;
    padding: 10px 25px;
    background: #ffe0a6;
    cursor: pointer;
    text-transform: uppercase;
    font-weight: bold;
    color: #000
  }
  button[name="submit"]:hover { 
    background: #ff6600;
  } 

  .header_mini{
    font-weight: bold;
    font-size: large;
    width: 350px;
    margin-left: 0px;
  }

  .countity_container{
    width: 100%;
    margin: 0 auto;
    padding-bottom: 15px;
    background-color: #ffffff;
  }
  .countity_style{
    font-weight: bold;

  }

  .bottom_container{
    width: 100%;
    margin: 0 auto;
    padding-top: 30px;
    padding-bottom: 20px;
    padding: auto;
    background-color: #ffffff;
  }

  .main_container {
    width: 100%;
    margin: 0 auto;
    padding: auto;
    background-color: #ffffff;
  }
  .internal_container{
    padding: 20px;
  }
  .table_container{
    font-weight: bold;
    margin: auto;
    padding: 5px;
    background-color: #ffffff;
    align-content: center;
  }
  .table_item{
    border: 1px solid #000;
    border-radius: 15px;
    padding: 10px;
    margin: 10px;
    margin-left: auto;
    margin-right: auto;
  }
  .table_button{
    font-weight: bold;
    font-size: medium;
    border-radius: 5px;
    padding: 3px;
    padding: 7px;
    background: #ffe0a6;
    border: 1px solid #000000;
    color: #000;
  }
  .table_button:hover{
    color: #666;
  }

  .header_container{
    width: 100%;
    margin: 0 auto;
    padding: auto;
    background-color: #ffffff;
  }

  img[name="settings"]{
    width: 29px;
    height: 29px;
  }

  #mini_header{
    float: left;
    display: block;
    width: 300px;
    margin-top: 7px;
    
  }

  #sett_icon{
    float: left;
    display: block;
    width: 300px;
    margin: 2px;
  }
</style>

</html>
)rawliteral";