// Copyright 2014 Baidu.com  All Rights Reserved.
// Author: tianmo@baidu.com (Mo Tian)
//
// This file automatically generated by template-converter:
//    template-converter monitor_ctpl monitor.ctpl
//
// DO NOT EDIT!

#ifndef UNISE_FRONTEND_CTPL_MONITOR_CTPL_H_
#define UNISE_FRONTEND_CTPL_MONITOR_CTPL_H_

#include <string>

const std::string monitor_ctpl(
"<html lang=\"en\">\n"
"  <head>\n"
"    <meta charset=\"utf-8\">\n"
"    <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n"
"    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n"
"    <title>Unise Frontend-monitor page</title>\n"
"    <script src=\"http://s1.bdstatic.com/r/www/cache/ecom/esl/1-6-10/esl.js\"></script>\n"
"    <link href=\"http://libs.baidu.com/bootstrap/3.0.3/css/bootstrap.min.css\" rel=\"stylesheet\">\n"
"    <style type=\"text/css\">\n"
"* {\n"
"margin:0px;\n"
"padding:0px;\n"
"}\n"
"\n"
".foot {\n"
"       height:50px;\n"
"       width:100%;\n"
"       background:#EEEEEE;\n"
"       color:#000;\n"
"       font-size:14px;\n"
"       text-align:center;\n"
"}\n"
".message_list, .chart {\n"
"border:1px solid #CCC;\n"
"}\n"
".chart {\n"
"height:300px;\n"
"margin:1px auto;\n"
"}\n"
"   body {\n"
"       padding-top: 70px;\n"
"   }\n"
"  </style>\n"
" </head>\n"
"\n"
" <body>\n"
"     <div class=\"navbar navbar-default navbar-fixed-top\" role=\"navigation\" style=\"background-color:#01184A;\">\n"
"      <div class=\"container\">\n"
"        <div class=\"navbar-header\">\n"
"            <span class=\"navbar-brand\" style=\"color:#FFF;font-size:27px;font-weight:bold;\">UniSE Frontend</span>\n"
"        </div>\n"
"        <div class=\"navbar-collapse collapse\">\n"
"          <ul class=\"nav navbar-nav navbar-right\">\n"
"            {{#ONE_PAGE_INFO_LEAD}}\n"
"            {{PAGE_LEAD}}\n"
"            {{/ONE_PAGE_INFO_LEAD}}\n"
"          </ul>\n"
"      </div>\n"
"      </div>\n"
"    </div>\n"
"\n"
"    <div class=\"container\">\n"
"       <div class=\"jumbotron\">\n"
"   <span style=\"font-size:13px;color:#01184A;font-weight:bold;\">&gt;&gt;MonitorProcessor</span><br>\n"
"\n"
"  {{#RESULT_OUTPUT}}\n"
"<hr size=\"1\" noshade=\"noshade\" style=\"border:1px #cccccc dotted;\">\n"
"   <span style=\"font-size:13px;color:#01184A;font-weight:bold;\">&gt;&gt;系统状态(后台key-value类型监控数据的实时状态展示)</span><br>\n"
"   <div>\n"
"       {{#MESSAGE_LIST}}\n"
"            <span style=\"font-size:14px;\">{{MESSAGE_KEY}}:{{MESSAGE_VALUE}}</span>\n"
"       {{/MESSAGE_LIST}}\n"
"   </div>\n"
"\n"
"<hr size=\"1\" noshade=\"noshade\" style=\"border:1px #cccccc dotted;\">\n"
"   <span style=\"font-size:13px;color:#01184A;font-weight:bold;\">&gt;&gt;Search(检索指标统计：检索耗时(SearchTime in ms)、检索深度(RetrieveDepth)、召回深度(RecallDocs))</span><br>\n"
"   <div>\n"
"        {{#CHART_LIST}}\n"
"            <div id='{{CHART_ID}}' class=\"chart\"></div>\n"
"        {{/CHART_LIST}}\n"
"   </div>\n"
"\n"
"<hr size=\"1\" noshade=\"noshade\" style=\"border:1px #cccccc dotted;\">\n"
"   <span style=\"font-size:13px;color:#01184A;font-weight:bold;\">&gt;&gt;Index(索引相关指标)</span><br>\n"
"   <div>\n"
"   </div>\n"
"\n"
"<hr size=\"1\" noshade=\"noshade\" style=\"border:1px #cccccc dotted;\">\n"
"   <span style=\"font-size:13px;color:#01184A;font-weight:bold;\">&gt;&gt;StateMessageHistory(内部监控消息队列的实时展示)</span><br>\n"
"   <div>\n"
"   </div>\n"
"\n"
"<hr size=\"1\" noshade=\"noshade\" style=\"border:1px #cccccc dotted;\">\n"
"    <div class=\"foot\">Any Question, Contact to vsce@baidu.com<br/>2014-09-17</div>\n"
"  {{/RESULT_OUTPUT}}\n"
"\n"
"    </div>\n"
"    </div>\n"
"\n"
"  {{#SCRIPT}}\n"
"  <script type=\"text/javascript\">\n"
"    {{VAR_JS}}\n"
"    require.config({\n"
"      paths:{ \n"
"        'echarts' : 'http://echarts.baidu.com/build/echarts',\n"
"        'echarts/chart/line' :\n"
"        'http://echarts.baidu.com/build/echarts'\n"
"      }\n"
"    });\n"
"    require(\n"
"      [\n"
"        'echarts',\n"
"        'echarts/chart/line'\n"
"      ],\n"
"      function (ec) {\n"
"        // 基于准备好的dom，初始化echarts图表\n"
"        var my_charts = new Array();\n"
"        for (var i=0;i<charts.length;i++) {\n"
"          my_charts[i] = ec.init(document.getElementById(charts[i].id));\n"
"        }\n"
"        var option = {\n"
"                tooltip : {\n"
"                    trigger: 'axis'\n"
"                },\n"
"                legend: {\n"
"                    data:['min','max','avg','count']\n"
"                },\n"
"                title : {\n"
"                    text:''\n"
"                },\n"
"                toolbox: {\n"
"                    show : true,\n"
"                    feature : {\n"
"                        restore : {show: true},\n"
"                        saveAsImage : {show: true}\n"
"                    }\n"
"                },\n"
"                calculable : true,\n"
"                dataZoom : {\n"
"                    show : true,\n"
"                    realtime : true,\n"
"                    start : 0,\n"
"                    end : 100\n"
"                },\n"
"                xAxis : [\n"
"                    {\n"
"                        type : 'category',\n"
"                        boundaryGap : false,\n"
"                        data : []\n"
"                    }\n"
"                ],\n"
"                yAxis : [\n"
"                    {\n"
"                        type : 'value'\n"
"                    }\n"
"                ],\n"
"                series : [\n"
"                    {\n"
"                        name:'min',\n"
"                        type:'line',\n"
"                        data:[]\n"
"                    },\n"
"                    {\n"
"                        name:'max',\n"
"                        type:'line',\n"
"                        data:[]\n"
"                    },\n"
"                    {\n"
"                        name:'avg',\n"
"                        type:'line',\n"
"                        data:[]\n"
"                    },\n"
"                    {\n"
"                        name:'count',\n"
"                        type:'line',\n"
"                        data:[]\n"
"                    }\n"
"                ]\n"
"        };\n"
"        for (var i = 0; i<charts.length;i++) {\n"
"          option.title.text = charts[i].title;\n"
"          option.xAxis[0].data = charts[i].x_l;\n"
"          option.series[0].data = charts[i].min_l;\n"
"          option.series[1].data = charts[i].max_l;\n"
"          option.series[2].data = charts[i].avg_l;\n"
"          option.series[3].data = charts[i].cnt_l;\n"
"          my_charts[i].setOption(option);\n"
"        }\n"
"      }\n"
"    );\n"
"  </script>\n"
"  {{/SCRIPT}}\n"
" </body>\n"
"</html>\n"
);

#endif  // UNISE_FRONTEND_CTPL_MONITOR_CTPL_H_
