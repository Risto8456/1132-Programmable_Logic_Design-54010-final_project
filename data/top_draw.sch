<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="xc9500" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1(3:0)" />
        <signal name="XLXN_2(3:0)" />
        <signal name="XLXN_3" />
        <signal name="XLXN_5" />
        <signal name="XLXN_6(2:0)" />
        <signal name="XLXN_19(3:0)" />
        <signal name="XLXN_20(3:0)" />
        <signal name="XLXN_22(3:0)" />
        <signal name="XLXN_23(3:0)" />
        <signal name="in_valid" />
        <signal name="rst_n" />
        <signal name="XLXN_27" />
        <signal name="XLXN_28" />
        <signal name="XLXN_29" />
        <signal name="XLXN_30" />
        <signal name="XLXN_31" />
        <signal name="XLXN_32" />
        <signal name="XLXN_33" />
        <signal name="XLXN_34" />
        <signal name="XLXN_35" />
        <signal name="qdbg(23:0)" />
        <signal name="in_num(3:0)" />
        <signal name="in_time(3:0)" />
        <signal name="XLXN_47" />
        <signal name="XLXN_48" />
        <signal name="clk3(3:0)" />
        <signal name="num3(3:0)" />
        <signal name="clk2(3:0)" />
        <signal name="num2(3:0)" />
        <signal name="clk1(3:0)" />
        <signal name="num1(3:0)" />
        <signal name="XLXN_21(3:0)" />
        <signal name="XLXN_18(3:0)" />
        <signal name="XLXN_10(2:0)" />
        <signal name="ld(0)" />
        <signal name="ld(1)" />
        <signal name="ld(2)" />
        <signal name="busy(0)" />
        <signal name="busy(1)" />
        <signal name="busy(2)" />
        <signal name="XLXN_71" />
        <signal name="XLXN_74(3:0)" />
        <signal name="XLXN_75(3:0)" />
        <signal name="clk" />
        <signal name="XLXN_77" />
        <signal name="XLXN_78" />
        <signal name="XLXN_79" />
        <signal name="XLXN_80" />
        <port polarity="Input" name="in_valid" />
        <port polarity="Input" name="rst_n" />
        <port polarity="Output" name="qdbg(23:0)" />
        <port polarity="Input" name="in_num(3:0)" />
        <port polarity="Input" name="in_time(3:0)" />
        <port polarity="Output" name="clk3(3:0)" />
        <port polarity="Output" name="num3(3:0)" />
        <port polarity="Output" name="clk2(3:0)" />
        <port polarity="Output" name="num2(3:0)" />
        <port polarity="Output" name="clk1(3:0)" />
        <port polarity="Output" name="num1(3:0)" />
        <port polarity="Input" name="clk" />
        <blockdef name="queue">
            <timestamp>2025-6-3T11:11:39</timestamp>
            <rect width="256" x="64" y="-384" height="384" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
            <line x2="384" y1="-272" y2="-272" x1="320" />
            <rect width="64" x="320" y="-204" height="24" />
            <line x2="384" y1="-192" y2="-192" x1="320" />
            <rect width="64" x="320" y="-124" height="24" />
            <line x2="384" y1="-112" y2="-112" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="dispatcher">
            <timestamp>2025-6-3T11:12:5</timestamp>
            <rect width="256" x="64" y="-384" height="384" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
            <rect width="64" x="320" y="-268" height="24" />
            <line x2="384" y1="-256" y2="-256" x1="320" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-76" height="24" />
            <line x2="384" y1="-64" y2="-64" x1="320" />
        </blockdef>
        <blockdef name="counter">
            <timestamp>2025-6-3T11:12:15</timestamp>
            <rect width="256" x="64" y="-320" height="320" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <block symbolname="queue" name="XLXI_1">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="rst_n" name="rst_n" />
            <blockpin signalname="in_valid" name="we" />
            <blockpin signalname="XLXN_5" name="re" />
            <blockpin signalname="in_num(3:0)" name="dn(3:0)" />
            <blockpin signalname="in_time(3:0)" name="dt(3:0)" />
            <blockpin name="full" />
            <blockpin signalname="XLXN_3" name="empty" />
            <blockpin signalname="XLXN_1(3:0)" name="qn(3:0)" />
            <blockpin signalname="XLXN_2(3:0)" name="qt(3:0)" />
            <blockpin signalname="qdbg(23:0)" name="qdbg(23:0)" />
        </block>
        <block symbolname="dispatcher" name="XLXI_2">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="rst_n" name="rst_n" />
            <blockpin signalname="XLXN_3" name="empty" />
            <blockpin signalname="XLXN_6(2:0)" name="busy(2:0)" />
            <blockpin signalname="XLXN_1(3:0)" name="qn(3:0)" />
            <blockpin signalname="XLXN_2(3:0)" name="qt(3:0)" />
            <blockpin signalname="XLXN_5" name="re" />
            <blockpin signalname="XLXN_10(2:0)" name="ld(2:0)" />
            <blockpin signalname="XLXN_21(3:0)" name="dn(3:0)" />
            <blockpin signalname="XLXN_18(3:0)" name="dt(3:0)" />
        </block>
        <block symbolname="counter" name="XLXI_5">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="rst_n" name="rst_n" />
            <blockpin signalname="ld(2)" name="ld" />
            <blockpin signalname="XLXN_21(3:0)" name="dn(3:0)" />
            <blockpin signalname="XLXN_18(3:0)" name="dt(3:0)" />
            <blockpin signalname="busy(2)" name="busy" />
            <blockpin signalname="num3(3:0)" name="num(3:0)" />
            <blockpin signalname="clk3(3:0)" name="rem(3:0)" />
        </block>
        <block symbolname="counter" name="XLXI_4">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="rst_n" name="rst_n" />
            <blockpin signalname="ld(1)" name="ld" />
            <blockpin signalname="XLXN_21(3:0)" name="dn(3:0)" />
            <blockpin signalname="XLXN_18(3:0)" name="dt(3:0)" />
            <blockpin signalname="busy(1)" name="busy" />
            <blockpin signalname="num2(3:0)" name="num(3:0)" />
            <blockpin signalname="clk2(3:0)" name="rem(3:0)" />
        </block>
        <block symbolname="counter" name="XLXI_3">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="rst_n" name="rst_n" />
            <blockpin signalname="ld(0)" name="ld" />
            <blockpin signalname="XLXN_21(3:0)" name="dn(3:0)" />
            <blockpin signalname="XLXN_18(3:0)" name="dt(3:0)" />
            <blockpin signalname="busy(0)" name="busy" />
            <blockpin signalname="num1(3:0)" name="num(3:0)" />
            <blockpin signalname="clk1(3:0)" name="rem(3:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="592" y="1584" name="XLXI_1" orien="R0">
        </instance>
        <branch name="XLXN_1(3:0)">
            <wire x2="1072" y1="1392" y2="1392" x1="976" />
            <wire x2="1072" y1="1392" y2="1488" x1="1072" />
            <wire x2="1216" y1="1488" y2="1488" x1="1072" />
        </branch>
        <branch name="XLXN_2(3:0)">
            <wire x2="1040" y1="1472" y2="1472" x1="976" />
            <wire x2="1040" y1="1472" y2="1552" x1="1040" />
            <wire x2="1216" y1="1552" y2="1552" x1="1040" />
        </branch>
        <branch name="XLXN_5">
            <wire x2="528" y1="1424" y2="1648" x1="528" />
            <wire x2="1664" y1="1648" y2="1648" x1="528" />
            <wire x2="592" y1="1424" y2="1424" x1="528" />
            <wire x2="1664" y1="1232" y2="1232" x1="1600" />
            <wire x2="1664" y1="1232" y2="1648" x1="1664" />
        </branch>
        <branch name="in_valid">
            <wire x2="464" y1="960" y2="960" x1="400" />
            <wire x2="464" y1="960" y2="1360" x1="464" />
            <wire x2="592" y1="1360" y2="1360" x1="464" />
        </branch>
        <iomarker fontsize="28" x="400" y="832" name="clk" orien="R180" />
        <iomarker fontsize="28" x="400" y="896" name="rst_n" orien="R180" />
        <iomarker fontsize="28" x="400" y="960" name="in_valid" orien="R180" />
        <branch name="in_num(3:0)">
            <wire x2="592" y1="1488" y2="1488" x1="400" />
        </branch>
        <branch name="in_time(3:0)">
            <wire x2="592" y1="1552" y2="1552" x1="400" />
        </branch>
        <iomarker fontsize="28" x="400" y="1488" name="in_num(3:0)" orien="R180" />
        <iomarker fontsize="28" x="400" y="1552" name="in_time(3:0)" orien="R180" />
        <branch name="XLXN_3">
            <wire x2="1136" y1="1312" y2="1312" x1="976" />
            <wire x2="1136" y1="1312" y2="1360" x1="1136" />
            <wire x2="1216" y1="1360" y2="1360" x1="1136" />
        </branch>
        <branch name="rst_n">
            <wire x2="528" y1="896" y2="896" x1="400" />
            <wire x2="528" y1="896" y2="1296" x1="528" />
            <wire x2="592" y1="1296" y2="1296" x1="528" />
            <wire x2="1168" y1="896" y2="896" x1="528" />
            <wire x2="1856" y1="896" y2="896" x1="1168" />
            <wire x2="1968" y1="896" y2="896" x1="1856" />
            <wire x2="1856" y1="896" y2="1296" x1="1856" />
            <wire x2="1856" y1="1296" y2="1696" x1="1856" />
            <wire x2="1968" y1="1696" y2="1696" x1="1856" />
            <wire x2="1968" y1="1296" y2="1296" x1="1856" />
            <wire x2="1168" y1="896" y2="1296" x1="1168" />
            <wire x2="1216" y1="1296" y2="1296" x1="1168" />
        </branch>
        <instance x="1216" y="1584" name="XLXI_2" orien="R0">
        </instance>
        <branch name="XLXN_6(2:0)">
            <wire x2="1104" y1="688" y2="1424" x1="1104" />
            <wire x2="1216" y1="1424" y2="1424" x1="1104" />
            <wire x2="2480" y1="688" y2="688" x1="1104" />
            <wire x2="2480" y1="688" y2="832" x1="2480" />
            <wire x2="2480" y1="832" y2="1232" x1="2480" />
            <wire x2="2480" y1="1232" y2="1632" x1="2480" />
        </branch>
        <branch name="qdbg(23:0)">
            <wire x2="992" y1="1552" y2="1552" x1="976" />
            <wire x2="992" y1="1552" y2="1984" x1="992" />
            <wire x2="2560" y1="1984" y2="1984" x1="992" />
        </branch>
        <bustap x2="1904" y1="960" y2="960" x1="1808" />
        <bustap x2="1904" y1="1360" y2="1360" x1="1808" />
        <bustap x2="1904" y1="1760" y2="1760" x1="1808" />
        <bustap x2="2384" y1="832" y2="832" x1="2480" />
        <bustap x2="2384" y1="1232" y2="1232" x1="2480" />
        <bustap x2="2384" y1="1632" y2="1632" x1="2480" />
        <branch name="clk3(3:0)">
            <wire x2="2368" y1="1888" y2="1888" x1="2352" />
            <wire x2="2560" y1="1888" y2="1888" x1="2368" />
        </branch>
        <branch name="num3(3:0)">
            <wire x2="2368" y1="1760" y2="1760" x1="2352" />
            <wire x2="2560" y1="1760" y2="1760" x1="2368" />
        </branch>
        <branch name="clk2(3:0)">
            <wire x2="2368" y1="1488" y2="1488" x1="2352" />
            <wire x2="2560" y1="1488" y2="1488" x1="2368" />
        </branch>
        <branch name="num2(3:0)">
            <wire x2="2368" y1="1360" y2="1360" x1="2352" />
            <wire x2="2560" y1="1360" y2="1360" x1="2368" />
        </branch>
        <branch name="clk1(3:0)">
            <wire x2="2368" y1="1088" y2="1088" x1="2352" />
            <wire x2="2560" y1="1088" y2="1088" x1="2368" />
        </branch>
        <branch name="num1(3:0)">
            <wire x2="2368" y1="960" y2="960" x1="2352" />
            <wire x2="2560" y1="960" y2="960" x1="2368" />
        </branch>
        <branch name="XLXN_10(2:0)">
            <wire x2="1808" y1="1328" y2="1328" x1="1600" />
            <wire x2="1808" y1="1328" y2="1360" x1="1808" />
            <wire x2="1808" y1="1360" y2="1760" x1="1808" />
            <wire x2="1808" y1="960" y2="1328" x1="1808" />
        </branch>
        <branch name="ld(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1952" y="960" type="branch" />
            <wire x2="1952" y1="960" y2="960" x1="1904" />
            <wire x2="1968" y1="960" y2="960" x1="1952" />
        </branch>
        <branch name="ld(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1952" y="1360" type="branch" />
            <wire x2="1952" y1="1360" y2="1360" x1="1904" />
            <wire x2="1968" y1="1360" y2="1360" x1="1952" />
        </branch>
        <branch name="ld(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1952" y="1760" type="branch" />
            <wire x2="1952" y1="1760" y2="1760" x1="1904" />
            <wire x2="1968" y1="1760" y2="1760" x1="1952" />
        </branch>
        <branch name="busy(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2368" y="832" type="branch" />
            <wire x2="2368" y1="832" y2="832" x1="2352" />
            <wire x2="2384" y1="832" y2="832" x1="2368" />
        </branch>
        <branch name="busy(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2368" y="1232" type="branch" />
            <wire x2="2368" y1="1232" y2="1232" x1="2352" />
            <wire x2="2384" y1="1232" y2="1232" x1="2368" />
        </branch>
        <branch name="busy(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2368" y="1632" type="branch" />
            <wire x2="2368" y1="1632" y2="1632" x1="2352" />
            <wire x2="2384" y1="1632" y2="1632" x1="2368" />
        </branch>
        <instance x="1968" y="1520" name="XLXI_4" orien="R0">
        </instance>
        <instance x="1968" y="1920" name="XLXI_5" orien="R0">
        </instance>
        <branch name="XLXN_21(3:0)">
            <wire x2="1760" y1="1424" y2="1424" x1="1600" />
            <wire x2="1968" y1="1424" y2="1424" x1="1760" />
            <wire x2="1760" y1="1424" y2="1824" x1="1760" />
            <wire x2="1968" y1="1824" y2="1824" x1="1760" />
            <wire x2="1968" y1="1024" y2="1024" x1="1760" />
            <wire x2="1760" y1="1024" y2="1424" x1="1760" />
        </branch>
        <branch name="XLXN_18(3:0)">
            <wire x2="1712" y1="1520" y2="1520" x1="1600" />
            <wire x2="1712" y1="1520" y2="1888" x1="1712" />
            <wire x2="1968" y1="1888" y2="1888" x1="1712" />
            <wire x2="1968" y1="1088" y2="1088" x1="1712" />
            <wire x2="1712" y1="1088" y2="1488" x1="1712" />
            <wire x2="1712" y1="1488" y2="1520" x1="1712" />
            <wire x2="1968" y1="1488" y2="1488" x1="1712" />
        </branch>
        <instance x="1968" y="1120" name="XLXI_3" orien="R0">
        </instance>
        <branch name="clk">
            <wire x2="592" y1="832" y2="832" x1="400" />
            <wire x2="592" y1="832" y2="1232" x1="592" />
            <wire x2="1200" y1="832" y2="832" x1="592" />
            <wire x2="1904" y1="832" y2="832" x1="1200" />
            <wire x2="1968" y1="832" y2="832" x1="1904" />
            <wire x2="1904" y1="832" y2="1232" x1="1904" />
            <wire x2="1904" y1="1232" y2="1632" x1="1904" />
            <wire x2="1968" y1="1632" y2="1632" x1="1904" />
            <wire x2="1968" y1="1232" y2="1232" x1="1904" />
            <wire x2="1200" y1="832" y2="1232" x1="1200" />
            <wire x2="1216" y1="1232" y2="1232" x1="1200" />
        </branch>
        <iomarker fontsize="28" x="2560" y="1888" name="clk3(3:0)" orien="R0" />
        <iomarker fontsize="28" x="2560" y="1760" name="num3(3:0)" orien="R0" />
        <iomarker fontsize="28" x="2560" y="1488" name="clk2(3:0)" orien="R0" />
        <iomarker fontsize="28" x="2560" y="1360" name="num2(3:0)" orien="R0" />
        <iomarker fontsize="28" x="2560" y="1088" name="clk1(3:0)" orien="R0" />
        <iomarker fontsize="28" x="2560" y="960" name="num1(3:0)" orien="R0" />
        <iomarker fontsize="28" x="2560" y="1984" name="qdbg(23:0)" orien="R0" />
    </sheet>
</drawing>