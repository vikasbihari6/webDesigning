<html>
    <style>
        div{
            width:100px;
            height: 100px;
            background-color: red;
            border: 2px solid yellow;
            animation:colorchange;
            animation-duration:3s;
            animation-iteration-count: infinite;
            animation-delay: 2s;
            position:relative;
            animation-direction: alternate;
            animation-timing-function: ease-out;
            border-radius:100%;
        }

        @keyframes colorchange{
           0%{left:0px; top:0px;}
        20%{left:300px; top:0px;}
        40%{left:300px; top:300px;}
        60%{left:0px; top:300px;}
        100%{left:0px; top:0px;}
       
        }



    </style>


    <body style="background-color: black;">



        <h1>CSS ANIMATION</h1>
        <div>

        </div>
    </body>




</html>
