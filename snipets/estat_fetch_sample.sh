#!/bin/bash

API_KEY=`pass japan/estat/personal_dev`
curl "http://api.e-stat.go.jp/rest/2.0/app/json/getStatsData?appId=f491ff23146b73589381a992e120e5704db74156&lang=J&statsDataId=0003109741&metaGetFlg=Y&cntGetFlg=N"
